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
		case 1:
		{
			cout << "�������� ������� f(int& h, int& m, int& s, int sec),\n";
			cout << "������� ��������� ���������� ������, ��������� � ������ ���, \n";
			cout << "� ���������� ��� ����� ���������� (����, ������ � �������)\n";
			task1:
			int m = 0, s, h=0;
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
				cout << h << " : "<< m << " : " << s << " : " << endl;
			}

		}





		default:
			break;
	}



	system("pause");
}