//���� 2 ������ 3 ��������
//14.12.2017



#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int task;
	char yn = 0;
	cout << "������� ����� ������� �� 1 �� 7 - ";
	cin >> task;

	switch (task)
	{

#pragma region TASK1
	case 1:
	{
		cout << "�������� ������� f(int& h, int& m, int& s, int sec),\n";
		cout << "������� ��������� ���������� ������, ��������� � ������ ���, \n";
		cout << "� ���������� ��� ����� ���������� (����, ������ � �������)\n";
	task1:
		int m = 0, s, h = 0;
		cout << "������� ���������� ������ - ";
		cin >> s;
		if (s < 1500)
		{
			cout << "��� �� �����������... ����� ����� ��������))" << endl;
			goto task1;
		}
		else
		{
			do
			{
				s -= 60;
				m += 1;
				cout << h << "~~~~~" << m << "~~~~~~ " << s << endl;

			} while (s >= 60);

			system("pause");
			if (m >= 60)
			{
				do
				{
					m -= 60;
					h += 1;

				} while (m >= 60);
			}
			cout << h << " : " << m << " : " << s << " : " << endl;
		}

	} break;
#pragma endregion

#pragma region TASK2
		case 2:
		{
			cout << "�������� ������� int f(int x), ������� ��������� ����� ��������\n";
			cout << "(�� ������ ���� ������) � ���������� ����� � �������� �������� ����.\n";
			cout << "��������, ����������� ����� 7631, ������������ ����� 1367\n";

			task2:
			int a;
			cout << "������� �����������, �����������, �������������� ��� ����������� ����� - ";
			cin >> a;
			if (a >= 10 && a <= 99)
			{
				int b;
				b = a % 10;
				a /= 10;
				cout << b << a << endl;
			}
			else if (a >= 100 && a <=999)
			{
				int b, c;
				b = a % 10;
				c = (a % 100) / 10;
				a /= 100;
				cout << c << b << a << endl;
			}
			else if (a >= 1000 && a <=9999)
			{
				int b, c, d;
				b = a % 10;
				c = (a % 100) / 10;
				d = (a % 1000) / 100;
				a /= 1000;
				cout << b << c << d << a << endl;
			}
			else if (a >= 10000 && a <=99999)
			{
				int b, c, d, e;
				b = a % 10;
				c = (a % 100) / 10;
				d = (a % 1000) / 100;
				e = (a % 10000) / 1000;
				a /= 10000;
				cout << b << c << d << e << a << endl;
			}
			else
			{
				cout << "������� ������������ �������. ������� ����� ��� ���" << endl;
				goto task2;
			}
		} break;
#pragma endregion

#pragma region TASK3
		case 3:
		{	
			task3:
			cout << "�������� �� ����������� ����� ����� N �����������??\n";
			int a;
			cout << "������� ����������� ����� - ";
			cin >> a;
			if (a >= 10000 && a <= 99999)
			{
				int b, c, d, e;
				b = a % 10;
				c = (a % 100) / 10;
				d = (a % 1000) / 100;
				e = (a % 10000) / 1000;
				a /= 10000;
				if (a == e && a == d && a == c && a == b)
				{
					cout << "������ ����� ���������!!!" << endl;
					cout << a << e << d << c << b << endl;
				}
				else if (a == e && a == c && a == b)
				{
					cout << "������ ����� ���������!!!" << endl;
					cout << a << e << d << c << b << endl;
				}
				else if (a == b && e == c)
				{
					cout << "������ ����� ���������!!!" << endl;
					cout << a << e << d << c << b << endl;
				}
				else
				{
					cout << "������ ����� �� ���������!!!" << endl;
					cout << a << e << d << c << b << endl;

				}
			}
			else
			{
				cout << "ERRRROR!!!!!!!!\n";
				goto task3;
			}

		} break;
#pragma endregion





		default:
			break;
	}



	system("pause");
}