////..................HEADER.FILES..........................//
//#include<iostream>
//#include<fstream>
//#include<cstring>
//#include<cstdlib>
//#include<ctime>
////...................NAMESPACES...........................//
//using namespace std;
////...................PROTOTYPES...........................//
//int lefttoright(char output[11][11],char inlet[11]);
//int righttoleft(char output[11][11], char inlet[11]);
//int toptobottom(char output[11][11], char inlet[11]);
//int bottomtotop(char output[11][11], char inlet[11]);
//int diagonaltoplefttobottomright(char output[11][11], char inlet[11]);
//int diagonaltoprighttobottomleft(char output[11][11], char inlet[11]);
//int diagonalbottomlefttotopright(char output[11][11], char inlet[11]);
//int diagonalbottomrighttotopleft(char output[11][11], char inlet[11]);
//int receivedlength(char inlet[11]);
//int emptylength(char output[11][11], int length, int xaxis, int yaxis);
//int emptylengthvertical(char output[11][11], int length, int xaxis, int yaxis);
//int emptylengthdiagonal(char output[11][11], int length, int xaxis, int yaxis);
//int emptylengthdiagonal2(char output[11][11], int length, int xaxis, int yaxis);
////....................INT MAIN...........................//
//int main() {
//	ifstream reader;
//	ofstream writer;
//	char finalgrid[11][11] = {};
//	for (int i = 0; i < 11; i++)
//	{
//		for (int j = 0; j < 11; j++)
//		{
//			finalgrid[i][j] = '.';
//		}
//	}
//	reader.open("input.txt"); int decider = 0;
//	writer.open("output.txt"); int i = 0;
//	cout << "!!!!------------------------------Welcome to Word Appending Wizard-------------------------!!!!\n\n\n";
//	while (99)
//	{
//		cout << "               |---|----------------------------------------------------|\n";
//		cout << "               |(1)| Press 1 for appending left to right                |\n";
//		cout << "               |(2)| Press 2 for appending right to left                |\n";
//		cout << "               |(3)| Press 3 for appending top to bottom                |\n";
//		cout << "               |(4)| Press 4 for appending bottom to top                |\n";
//		cout << "               |(5)| Press 5 for appending top-right to bottom-left     |\n";
//		cout << "               |(6)| Press 6 for appending top-left to bottom-right     |\n";
//		cout << "               |(7)| Press 7 for appending bottom-left to top-right     |\n";
//		cout << "               |(8)| Press 8 for appending bottom-right to top-left     |\n";
//		cout << "               |(9)| Press 0 to fill remaining boxes and end            |\n";
//		cout << "               |---|----------------------------------------------------|\n";
//		int userdecision = 0;
//		while (99)
//		{
//			cin >> userdecision;
//			if (userdecision >= 0 && userdecision <= 8) {
//				break;
//			}
//			else
//				cout << "Give Valid Input\n";
//		}
//		if (userdecision == 1) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = lefttoright(finalgrid, writerarray); i = 0;
//		}
//		if (userdecision == 2) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = righttoleft(finalgrid, writerarray); i = 0;
//		}
//		if (userdecision == 3) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = toptobottom(finalgrid, writerarray); i = 0;
//		}
//		if (userdecision == 4) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = bottomtotop(finalgrid, writerarray); i = 0;
//		}
//		if (userdecision == 5) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = diagonaltoprighttobottomleft(finalgrid, writerarray); i = 0;
//		}
//		if (userdecision == 6) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = diagonaltoplefttobottomright(finalgrid, writerarray); i = 0;
//		}
//		if (userdecision == 7) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = diagonalbottomlefttotopright(finalgrid, writerarray); i = 0;
//		}
//		if (userdecision == 8) {
//
//			string readwordfromfile;
//			char writerarray[11];
//			for (int ii = 0; ii < 11; ii++)
//			{
//				writerarray[ii] = '.';
//			}
//			reader >> readwordfromfile;
//			while (readwordfromfile[i] != '\0')
//			{
//				writerarray[i] = readwordfromfile[i];
//				i++;
//			}
//			decider = diagonalbottomlefttotopright(finalgrid, writerarray); i = 0;
//		}
//		for (int iii = 0; iii < 11; iii++)
//		{
//			for (int jjj = 0; jjj < 11; jjj++)
//			{
//				cout << finalgrid[iii][jjj] << "   ";
//			}
//			cout << endl;
//		}
//		if (userdecision == 0) {
//			srand(time(0));
//			for (int g = 0; g < 11; g++)
//			{
//				for (int h = 0; h < 11; h++)
//				{
//					char randomtime = rand() % 26;
//					randomtime += 65;
//					if (!(finalgrid[g][h] >= 65 && finalgrid[g][h] <= 91)) {
//						finalgrid[g][h] = randomtime;
//					}
//				}
//
//			}
//			cout << "Wrting is done\n";
//			reader.close();
//			break;
//		}
//	}
//	cout << "\n\nNow choose whether to display or write in file...!!\n";
//	cout << "1/2 for displaying/writing\n";
//	int userdecision = -1;
//	while (99)
//	{
//		cin >> userdecision;
//		if (userdecision == 1 || userdecision == 2) {
//			break;
//		}
//		else
//			cout << "Give Valid Input\n";
//	}
//	if (userdecision == 1) {
//		cout << "---------------------------------------------------------------------------------";
//		for (int iii = 0; iii < 11; iii++)
//		{
//			for (int jjj = 0; jjj < 11; jjj++)
//			{
//				cout << finalgrid[iii][jjj] << "   ";
//			}
//			cout << endl;
//		}
//		cout << "---------------------------------------------------------------------------------";
//	}
//	if (userdecision == 2) {
//		for (int iii = 0; iii < 11; iii++)
//		{
//			for (int jjj = 0; jjj < 11; jjj++)
//			{
//				writer << finalgrid[iii][jjj] << "   ";
//			}
//			writer << endl;
//		}
//		cout << "Written to file...........!!!";
//	}
//	return 0;
//}
////..................FUNCTION.DEFS..........................//
//int lefttoright(char output[11][11], char inlet[11]){
//	bool emptycheck = 0; int lengthh = receivedlength(inlet);
//	for (int y = 0; y < 11; y++){
//		for (int z = 0; z < (11-lengthh+1); z++){
//		emptycheck = emptylength(output, lengthh, y, z);
//			if (emptycheck == true) {
//				for (int d = z,f=0; d < lengthh; d++,f++){
//					if (inlet[f] != '.') {
//						if (inlet[f]>=97 && inlet[f]<=122){
//							inlet[f] -= 32;
//						}
//						output[y][d] = inlet[f];
//						inlet[f] = '.';
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int righttoleft(char output[11][11], char inlet[11]){
//	int lengthh = receivedlength(inlet);
//	for (int x = 0, y = lengthh - 1; x < lengthh / 2; x++, y--) {
//		char extra = inlet[y];
//		inlet[y] = inlet[x];
//		inlet[x] = extra;
//	}
//	lefttoright(output, inlet);
//	return 0;
//}
//int toptobottom(char output[11][11], char inlet[11]){
//	bool emptycheck = 0; int lengthh = receivedlength(inlet);
//	for (int y = 0; y < (11 - lengthh + 1); y++) {
//		for (int z = 0; z < 11; z++) {
//			emptycheck = emptylengthvertical(output, lengthh, y, z);
//			if (emptycheck == true) {
//				for (int d = z, f = 0; d < lengthh; d++, f++) {
//					if (inlet[f] != '.') {
//						if (inlet[f] >= 97 && inlet[f] <= 122) {
//							inlet[f] -= 32;
//						}
//						output[d][z] = inlet[f];
//						inlet[f] = '.';
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int bottomtotop(char output[11][11], char inlet[11]){
//	int lengthh = receivedlength(inlet);
//	for (int x = 0, y = lengthh - 1; x < lengthh / 2; x++, y--) {
//		char extra = inlet[y];
//		inlet[y] = inlet[x];
//		inlet[x] = extra;
//	}
//	toptobottom(output, inlet);
//	return 0;
//}
//int diagonaltoplefttobottomright(char output[11][11], char inlet[11]){
//	bool emptycheck = 0; int lengthh = receivedlength(inlet);
//	for (int y = 0; y < 11; y++) {
//		for (int z = 0; z < 11; z++) {
//			emptycheck = emptylengthdiagonal(output, lengthh, y, z);
//			if (emptycheck == true) {
//				for (int d = y,e=z, f = 0; d < lengthh; d++,e++, f++) {
//					if (inlet[f] != '.') {
//						if (inlet[f] >= 97 && inlet[f] <= 122) {
//							inlet[f] -= 32;
//						}
//						output[d][e] = inlet[f];
//						inlet[f] = '.';
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int diagonaltoprighttobottomleft(char output[11][11], char inlet[11]){
//	bool emptycheck = 0; int lengthh = receivedlength(inlet);
//	for (int y = 0; y < 11; y++) {
//		for (int z = 0; z < 11; z++) {
//			emptycheck = emptylengthdiagonal2(output, lengthh, y, z);
//			if (emptycheck == true) {
//				for (int d = y, e = z, f = 0,c=0;c<lengthh; d++, e--, f++,c++) {
//					if (inlet[f] != '.') {
//						if (inlet[f] >= 97 && inlet[f] <= 122) {
//							inlet[f] -= 32;
//						}
//						output[d][e] = inlet[f];
//						inlet[f] = '.';
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int diagonalbottomlefttotopright(char output[11][11], char inlet[11]){
//	int lengthh = receivedlength(inlet);
//	for (int x = 0, y = lengthh - 1; x < lengthh / 2; x++, y--) {
//		char extra = inlet[y];
//		inlet[y] = inlet[x];
//		inlet[x] = extra;
//	}
//	diagonaltoprighttobottomleft(output, inlet);
//	return 0;
//}
//int diagonalbottomrighttotopleft(char output[11][11], char inlet[11]){
//	int lengthh = receivedlength(inlet);
//	for (int x = 0, y = lengthh - 1; x < lengthh / 2; x++, y--) {
//		char extra = inlet[y];
//		inlet[y] = inlet[x];
//		inlet[x] = extra;
//	}
//	diagonaltoplefttobottomright(output, inlet);
//	return 0;
//}
//int receivedlength(char inlet[11]){
//	int size = 11;
//	for (int a = 10; a >= 0; a--)
//	{
//		if (inlet[a]=='.')
//		{
//			size--;
//		}
//	}
//	return size;
//}
//int emptylength(char output[11][11], int length, int xaxis, int yaxis){
//	if ((yaxis + length) >= 11) {
//		return 0;
//	}
//	for (int iiii = yaxis; iiii < length; iiii++) {
//		if (output[xaxis][iiii] != '.') {
//			return 0;
//		}
//	}
//	return 1;
//}
//int emptylengthvertical(char output[11][11], int length, int xaxis, int yaxis){
//	if ((xaxis + length) >= 11) {
//		return 0;
//	}
//	for (int iiii = yaxis; iiii < length; iiii++) {
//		if (output[iiii][yaxis] != '.') {
//			return 0;
//		}
//	}
//	return 1;
//}
//int emptylengthdiagonal(char output[11][11], int length, int xaxis, int yaxis) {
//	if (((xaxis + length) >= 11) || ((yaxis + length) >= 11)) {
//		return 0;
//	}
//	for (int m = xaxis, n = yaxis; m < length - 1; m++, n++) {
//		if (output[m][n] != '.') {
//			return 0;
//		}
//	}
//	return 1;
//}
//int emptylengthdiagonal2(char output[11][11], int length, int xaxis, int yaxis) {
//	if (((xaxis + length) >= 11) || ((yaxis - length) < 0)) {
//		return 0;
//	}
//	for (int m = xaxis, n = yaxis, c=0;c<length; m--, n--,c++) {
//		if (output[m][n] != '.') {
//			return 0;
//		}
//	}
//	return 1;
//}