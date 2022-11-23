#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//--------------------------------------------\\
//	  Чтобы найти нужные задачи попробуйте    \\
//    ввести Ctrl+Q, затем задать запрос:     \\
//    Пример: task_n, n-номер задания 		  \\
//	  	                                      \\
//	  Клавиши от 1 до 0 активируют задачи     \\
//                по порядку				  \\
// 	    кнопка Esc закрывает программу		  \\
//--------------------------------------------\\

// P.S Главный блок находится в самом внизу :D
// Дальше огромный блок подпрограмм с задачами
//-----------------------------------------------------------------------------------------------------------------------------------------------------\\


void ending() {
	cout << " " << endl;
	cout << " " << endl;
}

void task_1() {              // Код к 1-ой задаче
	cout << " Вы вызвали 1-ю задачу" << endl;
	cout << " Программа должна заменят Николая на олега, но из-за этого бедный Олег может остатся колекой - OlegNoleg" << endl;
	cout << " Или этот Николай может сделать Олега закомлексовоным и кричать - NOOOOOOOOOleg" << endl;
	cout << " Не будьте равнодушными, помогите Олегу в его жизни" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int find_name = text.find("Nikolay");
		if (find_name != -1) {
			text.replace(find_name, 7, "Oleg");
			cout << " Вам наврали, Николай это: " << text;
		}
		else
			cout << " А где Николай?: " << text;
}

void task_2() {              // Код к 2-ой задаче
	cout << " Вы вызвали 2-ю задачу" << endl;
	cout << " Программа должна раставлять запятые"<< endl;
	cout << " Введите строку: ";

	string oldText, newText;
	cin >> oldText;

	for (int i = 0; i < 3; i++) {
		newText = newText + oldText + ", ";
	}
	int len = size(newText);
	newText.replace(len-2, 1, " ");
	cout << " " << newText << endl;
	cout << " Длинна строки: " << len-2;
}

void task_3() {              // Код к 3-ей задаче
	cout << " Вы вызвали 3-ю задачу" << endl;
	cout << " Программа должна выводить первый/средний/последний символ." << endl;
	cout << " Введите строку: ";

	string Text;
	cin >> Text;
	cout << " " << Text.front();
	int len = size(Text);
	cout << " " << Text[len / 2];
	cout << " " << Text.back();
}

void task_4() {				 // Код к 4-ой задаче
	cout << " Вы вызвали 4-ю задачу" << endl;
	cout << " Программа должна выводить...что-то...ну....да....." << endl;
	cout << " Введите строку: ";

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

void task_5() {              // Код к 5-ой задаче
	cout << " Вы вызвали 5-ю задачу" << endl;
	cout << " Программа должна выводить....да.....это....крч вы поняли..." << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int len = size(text);
	for (int i = 0; i <= len; i++){
		if (text[i] == text.back())
			cout << " " << i + 1 << " ";
	}
}

void task_6() {             // Код к 6-ой задаче
	cout << " Вы вызвали 6-ю задачу" << endl;
	cout << " Программа должна выввести каждый 3, 6, 9, ... символ" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int len = size(text);
	for (int i = 3; i < len; i = i + 3) {
		cout << " " << text[i - 1] << " ";
	}
}

void task_7() {            // Код к 7-ой задаче
	cout << " Вы вызвали 7-ю задачу" << endl;
	cout << " Программа должна определить кол-во + и -, также 0 стоящие после этих знаков" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int len = size(text), count_1 = 0, count_2 = 0;
	for (int i = 1; i < len; i++) {
		if (text[i] == '+' || text[i] == '-')
			count_1++;
		if (text[i] == '+' || text[i] == '-' && text[i] == '0')
			count_2++;
	}
	cout << " Кол-во символо + и -: " << count_1 << endl;
	cout << " Кол-во символо +, - и нулей после этих символов: " << count_2;
}

void task_8() {            // Код к 8-ой задаче      
	cout << " Вы вызвали 8-ю задачу" << endl;
	cout << " Программа должна определить кто займёт топ-1 из w и x" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int len = size(text);
	for (int i = 1; i <= len; i++) {
		if (text[i] == 'w')
			cout << " Топ-1 занял (" << text[i] << ")";
		else
			if (text[i] == 'x')
				cout << " Топ-1 занял (" << text[i] << ")";
		if (i == len)
			cout << " В этот раз топ-1 никто не взял";
	}
}

void task_9() {              // Код к 9-ой задаче
	cout << " Вы вызвали 9-ю задачу" << endl;
	cout << " Программа должна сравнить две строки и вывести её в зависимости на сколько первая строка меньше второй" << endl;
	string text_1, text_2;
	cout << " Введите первую строку: ";
	cin >> text_1;
	cout << " Введите вторую строку: ";
	cin >> text_2;
	int len_text_1 = size(text_1);
	int len_text_2 = size(text_2);

	if (len_text_1 > len_text_2) {
		len_text_1 = len_text_1 - len_text_2;
		cout << " Строка 1 больше второй на " << len_text_1 << " символов" << endl;
		for (int i = 0; i < len_text_1; i++)
			cout << " " << text_1 << " ";
	}
	else
		if (len_text_1 < len_text_2) {
			len_text_2 = len_text_2 - len_text_1;
			cout << " Строка 2 больше первой на " << len_text_2 << " символов" << endl;
			for (int i = 0; i < len_text_2; i++)
				cout << " " << text_2 << " ";
		}
		else
			cout << " Обе строки равны";

}

void task_10() {              // Код к 10-ой задаче
	cout << " Вы вызвали 10-ю задачу" << endl;
	cout << " Программа должна заменит abc(В первой строке) на www иначе в конце написать zzz" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int find_text = text.find("abc", 0);
	if (find_text != -1)
		text.replace(find_text, 3, "abc");
	else
		text.append(3, 'z');
	cout << " Новый текст: " << text;
}

void task_11() {              // Код к 11-ой задаче
	cout << " Вы вызвали 11-ю задачу" << endl;
	cout << " Программа должна определить что строка больше/меньше 10 и поменять строку" << endl;
	cout << " Введите строку: ";
	
	string text;
	cin >> text;
	int len = size(text);
	if (len > 10) {
		cout << " Длина строки больше 10: ";
		for (int i = 0; i < 6; i++)
			cout << text[i];
	}
	else {
		cout << " Длина строки меньше 10: ";
		for (int i = len; i < 12; i++)
			text.append(1, 'o');
		cout << text;
	}
}

void task_12() {              // Код к 12-ой задаче
	cout << " Вы вызвали 12-ю задачу" << endl;
	cout << " Программа должна кол-во цифр в строке" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int len = size(text), count = 0;
	string numbers = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
	for (int i = 0; i < len; i++) 
		for (int j = 0; j < 10; j++) 
			if (text[i] == numbers[j])
				count++;
	cout << " Кол-во цифр в строке: " << count;
}

void task_13() {              // Код к 13-ой задаче
	cout << " Вы вызвали 13-ю задачу" << endl;
	cout << " Программа должна определить есть только abc или не только abc" << endl;
	cout << " Введите строку: ";

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
		cout << " В строке только символы a b c";
	else
		cout << " В строке Не только символы a b c";
}

void task_14() {
	cout << " Вы вызвали 14-ю задачу" << endl;
	cout << " Программа должна заменить word на letter" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int len = size(text);
	int find_text = text.find("word");
	if (find_text != -1) {
		text.replace(find_text, 6, "letter");
		cout << " Текст с заменой: " << text;
	}
	else
		cout << " В тексте нет слова word";
}

void task_15() {
	cout << " Вы вызвали 15-ю задачу" << endl;
	cout << " Программа должна удалять все x, после abc" << endl;
	cout << " Введите строку: ";

	string text;
	cin >> text;
	int i = 1;
	//while (true) {
		int find_text = text.find('abc');
		while (true) {
			if (text[find_text + i] == 'x') {
				text.replace(find_text + i, 1, " ");
				//text.replace(find_text, 1, "а");
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
	cout << "|| Доступные задачи: 1 - 15              ||" << endl;
	cout << "|| 1-е 10 задач  |11,  12,  13,  14,  15 ||" << endl;
	cout << "|| С клавиатуры  |'-', '+', '`', '[', ']'||" << endl;
	cout << "|| от 1 до 0     |                       ||" << endl;
	cout << "\\---------------------------------------//" << endl;
	cout << " Нажмите Esc - чтобы закрыть программу     " << endl << endl;
	cout << " Нажмите на клавиатуре одну из представенных комбинаций" << endl;
	cout << " P.S если вызвать первую задачу, то можно сразу пройти по поряду" << endl << endl;
	do { // Этот блок отвечает за клавиши вызова подпрограмм
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
