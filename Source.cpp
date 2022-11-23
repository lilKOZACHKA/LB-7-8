#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//--------------------------------------------\\
//	  ����� ����� ������ ������ ����������    \\
//    ������ Ctrl+Q, ����� ������ ������:     \\
//    ������: task_n, n-����� ������� 		  \\
//	  	                                      \\
//	  ������� �� 1 �� 0 ���������� ������     \\
//                �� �������				  \\
// 	    ������ Esc ��������� ���������		  \\
//--------------------------------------------\\

// P.S ������� ���� ��������� � ����� ����� :D
// ������ �������� ���� ����������� � ��������
//-----------------------------------------------------------------------------------------------------------------------------------------------------\\


void ending() {
	cout << " " << endl;
	cout << " " << endl;
}

void task_1() {              // ��� � 1-�� ������
	cout << " �� ������� 1-� ������" << endl;
	cout << " ��������� ������ ������� ������� �� �����, �� ��-�� ����� ������ ���� ����� ������� ������� - OlegNoleg" << endl;
	cout << " ��� ���� ������� ����� ������� ����� ��������������� � ������� - NOOOOOOOOOleg" << endl;
	cout << " �� ������ ������������, �������� ����� � ��� �����" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int find_name = text.find("Nikolay");
		if (find_name != -1) {
			text.replace(find_name, 7, "Oleg");
			cout << " ��� �������, ������� ���: " << text;
		}
		else
			cout << " � ��� �������?: " << text;
}

void task_2() {              // ��� � 2-�� ������
	cout << " �� ������� 2-� ������" << endl;
	cout << " ��������� ������ ���������� �������"<< endl;
	cout << " ������� ������: ";

	string oldText, newText;
	cin >> oldText;

	for (int i = 0; i < 3; i++) {
		newText = newText + oldText + ", ";
	}
	int len = size(newText);
	newText.replace(len-2, 1, " ");
	cout << " " << newText << endl;
	cout << " ������ ������: " << len-2;
}

void task_3() {              // ��� � 3-�� ������
	cout << " �� ������� 3-� ������" << endl;
	cout << " ��������� ������ �������� ������/�������/��������� ������." << endl;
	cout << " ������� ������: ";

	string Text;
	cin >> Text;
	cout << " " << Text.front();
	int len = size(Text);
	cout << " " << Text[len / 2];
	cout << " " << Text.back();
}

void task_4() {				 // ��� � 4-�� ������
	cout << " �� ������� 4-� ������" << endl;
	cout << " ��������� ������ ��������...���-��...��....��....." << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;

	int len = size(text);
	int count = 0;
	if (len > 6) {
		for (int i = 0; i < 6; i++) {
			if (i < 3)
				cout << " " << text[i];
			else {
				count++;
				cout << " " << text[len - count];
			}
		}
	}
	else
		for (int i = 0; i < len; i++)
			cout << " " << text[1];
}

void task_5() {              // ��� � 5-�� ������
	cout << " �� ������� 5-� ������" << endl;
	cout << " ��������� ������ ��������....��.....���....��� �� ������..." << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int len = size(text);
	for (int i = 0; i <= len; i++){
		if (text[i] == text.back())
			cout << " " << i + 1 << " ";
	}
}

void task_6() {             // ��� � 6-�� ������
	cout << " �� ������� 6-� ������" << endl;
	cout << " ��������� ������ �������� ������ 3, 6, 9, ... ������" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int len = size(text);
	for (int i = 3; i < len; i = i + 3) {
		cout << " " << text[i - 1] << " ";
	}
}

void task_7() {            // ��� � 7-�� ������
	cout << " �� ������� 7-� ������" << endl;
	cout << " ��������� ������ ���������� ���-�� + � -, ����� 0 ������� ����� ���� ������" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int len = size(text), count_1 = 0, count_2 = 0;
	for (int i = 1; i < len; i++) {
		if (text[i] == '+' || text[i] == '-')
			count_1++;
		if (text[i] == '+' || text[i] == '-' && text[i] == '0')
			count_2++;
	}
	cout << " ���-�� ������� + � -: " << count_1 << endl;
	cout << " ���-�� ������� +, - � ����� ����� ���� ��������: " << count_2;
}

void task_8() {            // ��� � 8-�� ������      
	cout << " �� ������� 8-� ������" << endl;
	cout << " ��������� ������ ���������� ��� ����� ���-1 �� w � x" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int len = size(text);
	for (int i = 1; i <= len; i++) {
		if (text[i] == 'w')
			cout << " ���-1 ����� (" << text[i] << ")";
		else
			if (text[i] == 'x')
				cout << " ���-1 ����� (" << text[i] << ")";
		if (i == len)
			cout << " � ���� ��� ���-1 ����� �� ����";
	}
}

void task_9() {              // ��� � 9-�� ������
	cout << " �� ������� 9-� ������" << endl;
	cout << " ��������� ������ �������� ��� ������ � ������� � � ����������� �� ������� ������ ������ ������ ������" << endl;
	string text_1, text_2;
	cout << " ������� ������ ������: ";
	cin >> text_1;
	cout << " ������� ������ ������: ";
	cin >> text_2;
	int len_text_1 = size(text_1);
	int len_text_2 = size(text_2);

	if (len_text_1 > len_text_2) {
		len_text_1 = len_text_1 - len_text_2;
		cout << " ������ 1 ������ ������ �� " << len_text_1 << " ��������" << endl;
		for (int i = 0; i < len_text_1; i++)
			cout << " " << text_1 << " ";
	}
	else
		if (len_text_1 < len_text_2) {
			len_text_2 = len_text_2 - len_text_1;
			cout << " ������ 2 ������ ������ �� " << len_text_2 << " ��������" << endl;
			for (int i = 0; i < len_text_2; i++)
				cout << " " << text_2 << " ";
		}
		else
			cout << " ��� ������ �����";

}

void task_10() {              // ��� � 10-�� ������
	cout << " �� ������� 10-� ������" << endl;
	cout << " ��������� ������ ������� abc(� ������ ������) �� www ����� � ����� �������� zzz" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int find_text = text.find("abc", 0);
	if (find_text != -1)
		text.replace(find_text, 3, "abc");
	else
		text.append(3, 'z');
	cout << " ����� �����: " << text;
}

void task_11() {              // ��� � 11-�� ������
	cout << " �� ������� 11-� ������" << endl;
	cout << " ��������� ������ ���������� ��� ������ ������/������ 10 � �������� ������" << endl;
	cout << " ������� ������: ";
	
	string text;
	cin >> text;
	int len = size(text);
	if (len > 10) {
		cout << " ����� ������ ������ 10: ";
		for (int i = 0; i < 6; i++)
			cout << text[i];
	}
	else {
		cout << " ����� ������ ������ 10: ";
		for (int i = len; i < 12; i++)
			text.append(1, 'o');
		cout << text;
	}
}

void task_12() {              // ��� � 12-�� ������
	cout << " �� ������� 12-� ������" << endl;
	cout << " ��������� ������ ���-�� ���� � ������" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int len = size(text), count = 0;
	string numbers = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
	for (int i = 0; i < len; i++) 
		for (int j = 0; j < 10; j++) 
			if (text[i] == numbers[j])
				count++;
	cout << " ���-�� ���� � ������: " << count;
}

void task_13() {              // ��� � 13-�� ������
	cout << " �� ������� 13-� ������" << endl;
	cout << " ��������� ������ ���������� ���� ������ abc ��� �� ������ abc" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int len = size(text), count = 0;
	for (int i = 0; i < len; i++)
		if (text[i] == 'a' || text[i] == 'b' || text[i] == 'c')
			count++;
		else {
			count = 0; 
		    break;
	    }
	if (count != 0)
		cout << " � ������ ������ ������� a b c";
	else
		cout << " � ������ �� ������ ������� a b c";
}

void task_14() {
	cout << " �� ������� 14-� ������" << endl;
	cout << " ��������� ������ �������� word �� letter" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int len = size(text);
	int find_text = text.find("word");
	if (find_text != -1) {
		text.replace(find_text, 6, "letter");
		cout << " ����� � �������: " << text;
	}
	else
		cout << " � ������ ��� ����� word";
}

void task_15() {
	cout << " �� ������� 15-� ������" << endl;
	cout << " ��������� ������ ������� ��� x, ����� abc" << endl;
	cout << " ������� ������: ";

	string text;
	cin >> text;
	int i = 1;
	//while (true) {
		int find_text = text.find('abc');
		while (true) {
			if (text[find_text + i] == 'x') {
				text.replace(find_text + i, 1, " ");
				//text.replace(find_text, 1, "�");
				i++;
			}
			else
				break;
		//}
		//if (find_text == -1)
			//break;
	}
	cout << text;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------\\

int main() { 
	setlocale(LC_ALL, "Russian");
	cout << "//---------------------------------------\\" << endl;
	cout << "||        Dimitrado Entertainment        ||" << endl;
	cout << "||---------------------------------------||" << endl;
	cout << "|| ��������� ������: 1 - 15              ||" << endl;
	cout << "|| 1-� 10 �����  |11,  12,  13,  14,  15 ||" << endl;
	cout << "|| � ����������  |'-', '+', '`', '[', ']'||" << endl;
	cout << "|| �� 1 �� 0     |                       ||" << endl;
	cout << "\\---------------------------------------//" << endl;
	cout << " ������� Esc - ����� ������� ���������     " << endl << endl;
	cout << " ������� �� ���������� ���� �� ������������� ����������" << endl;
	cout << " P.S ���� ������� ������ ������, �� ����� ����� ������ �� ������" << endl << endl;
	do { // ���� ���� �������� �� ������� ������ �����������
		switch (_getch())
		{
		case '1': {
			task_1();
			ending();
		}
		case '2': {
			task_2();
			ending();
		}
		case '3': {
			task_3();
			ending();
		}
		case '4': {
			task_4();
			ending();
		}
		case '5': {
			task_5();
			ending();
		}
		case '6': {
			task_6();
			ending();
		}
		case '7': {
			task_7();
			ending();
		}
		case '8': {
			task_8();
			ending();
		}
		case '9': {
			task_9();
			ending();
		}
		case '0': {
			task_10();
			ending();
		}
		case '-': {
			task_11();
			ending();
		}
		case '+': {
			task_12();
			ending();
		}
		case '`': {
			task_13();
			ending();
		}
		case '[': {
			task_14();
			ending();
		}
		case ']': {
			task_15();
			ending();
		}

		default:
			break;
		}
	} while (_getch() != 27);
	return 0;
}
