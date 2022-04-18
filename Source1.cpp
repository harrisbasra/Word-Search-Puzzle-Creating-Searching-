#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
bool horizontalcheck(char maingrid[11][11],int r,int c,char word[], int length) {
	
	for (int j = c,f=0; j < length; j++,f++) {
		if (word[f] >= 97 && word[f] <= 122) {
			word[f] -= 32;
		}
		if (maingrid[r][j] != word[f]) {
				return false;
		}
	}
	return true;
}
bool verticalcheck(char maingrid[11][11], int r, int c, char word[], int length) {

	for (int j = r, f = 0; j < length; j++, f++) {
		if (word[f] >= 97 && word[f] <= 122) {
			word[f] -= 32;
		}
		if (maingrid[j][c] != word[f]) {
			return false;
		}
	}
	return true;
}
bool diagonalcheck(char maingrid[11][11], int r, int c, char word[], int length) {

	for (int j = r,k=c, f = 0; j < length; j++, f++,k++) {
		if (word[f] >= 97 && word[f] <= 122) {
			word[f] -= 32;
		}
		if (maingrid[j][k] != word[f]) {
			return false;
		}
	}
	return true;
}
void disp(char maingrid[11][11]) {
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++) {
			cout << maingrid[i][j] << "  ";
		}
		cout << endl;
	}
}
int main() {
	ifstream jointreaderwriter;
	ifstream joint;
	ofstream jointwriter;
	jointreaderwriter.open("input.txt");
	jointwriter.open("output.txt");
	joint.open("input2.txt");

	while (99)
	{
		char maingrid[11][11] = {};
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++) {
				jointreaderwriter >> maingrid[i][j];
			}
		}
		char extra[11][11] = {};
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++) {
				extra[i][j] = maingrid[i][j];
			}
		}
		char inputword[] = ".";
		cout << "Enter Word (e.g enter FIND or KEEW) (Enter 0 to exit)" << endl;
		cin >> inputword;
		if (inputword[0] == '0') {
			cout << "Thanks for using" << endl;
			break;
		}
		int lenghth = strlen(inputword);
		char searchword;
		searchword = inputword[0];
		if (searchword > 97 && searchword < 122) {
			searchword -= 32;
		}
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++) {
				if (extra[i][j] != searchword) {
					extra[i][j] = '.';
				}
			}
		}
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++) {
				if (extra[i][j] != '.') {
					extra[i][j] = '?';
				}
			}
		}
		int retreiver = 0;
		for (int i = 0; i<11; i++)
		{
			for (int j = 0; j <11; j++) {
				if (extra[i][j] == '?') {
					bool checker = horizontalcheck(maingrid, i, j, inputword, lenghth);
					if (checker == true) {
						if (retreiver == 0) {
							jointwriter << "{" << i + 1 << "," << j + 1 << "}--{" << i + 1 << "," << j + lenghth << "}" << endl;
							retreiver++;
						}
					}
				}
			}
		}
		
		if (retreiver == 0) {
			for (int i = 0; i <11; i++)
			{
				for (int j = 0; j<11 ; j++) {
					if (extra[i][j] == '?') {
						bool checker = verticalcheck(maingrid, i, j, inputword, lenghth);
						if (checker == true) {
							if (retreiver == 0) {
								jointwriter << "{" << i + 1  << "," << j + 1 << "}--{" << i + 1 + lenghth << "," << j + 1 << "}" << endl;
								retreiver++;
							}
						}
					}
				}
			}
		}
		if (retreiver == 0) {
			for (int i = 0; i < 11; i++)
			{
				for (int j = 0; j <= 11; j++) {
					if (extra[i][j] == '?') {
						bool checker = diagonalcheck(maingrid, i, j, inputword, lenghth);
						if (checker == true) {
							if (retreiver == 0) {
								jointwriter << "{" << i + 1 << "," << j + 1 << "}--{" << i + 1 + lenghth << "," << j + 1 + lenghth << "}" << endl;
								retreiver++;
							}
						}
					}
				}
			}
		}
		if (retreiver == 0) {
			jointwriter << "Not Found" << endl;
		}
	}
	return 0;
}