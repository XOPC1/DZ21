//Персональный шаблон проекта С++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Введите стоимость 2 носков человека паука и одного щитка: ";
	cin >> x >> y;
	int* px = &x;
	int* py = &y;
	int PoorManShield = (*px + *py);
	cout << "Стоимость щитка бомжа составляет = " << PoorManShield << endl;
	cout << "Сегодня мы вспомнили замечательный итем PoorManShield, и если у вас получилась сумма 550 то вы олдфаг, поздравляю!";
	return 0;
}