//������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "������� ��������� 2 ������ �������� ����� � ������ �����: ";
	cin >> x >> y;
	int* px = &x;
	int* py = &y;
	int PoorManShield = (*px + *py);
	cout << "��������� ����� ����� ���������� = " << PoorManShield << endl;
	cout << "������� �� ��������� ������������� ���� PoorManShield, � ���� � ��� ���������� ����� 550 �� �� ������, ����������!";
	return 0;
}