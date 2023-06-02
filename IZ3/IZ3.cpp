//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Индивидуальное задание №3
//КТбо1-7 ПоповДС
//Вариант №14
//14.05.2023

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

//Функция рассчета ПРФ
//Входные параметры:        x1 - значение первого параметра функции
//							x2 - значение второго параметра функции
//Выходные данные:          answer - значение функции для входных параметров
int Rekursia(unsigned long long int x1, unsigned long long  int x2) {
	if (x1 == 0) {
		cout << "f(0," << x2 << ") = g(" << x2 << ") = 0" << endl;
		return 0;
	}
	unsigned long long int a = Rekursia(x1 - 1, x2);
	unsigned long long int answer = a + pow(x2, 3);

	cout << "f(" << x1 << "," << x2 << ") = h(" << x1 - 1 << ",f(" << x1 - 1 << "," << x2 << ")," << x2 << ") = h(" << x1 - 1 << "," << a << "," << x2 << ") = " << answer << endl;
	return answer;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Схема рекурсии:" << endl;
	cout << "f(0,x2) = g(x2) = 0" << endl;
	cout << "f(y+1,x2) = h(y,f(y,x2),x2) = (x2)^3 + f(y,x2)" << endl;
	bool chek = true;
	unsigned long long int x1, x2, answer;
	do {
		cout << "Введите x1 и x2" << endl;;
		cout << "x1: ";
		cin >> x1;
		cout << "x2: ";
		cin >> x2;
		answer = Rekursia(x1, x2);
		cout << "Хотите продолжить работу?" << endl;
		cout << "1 - да" << endl;
		cout << "2 - нет" << endl;;
		int x;
		cin >> x;
		if (x == 1) {
			chek = true;
		}
		else {
			chek = false;
		}
	} while (chek);
	cout << "Хорошего дня!";
}
