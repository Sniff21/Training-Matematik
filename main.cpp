#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;


int a;
int b;
int c;
int d;
int i;
int j;
int one,two;
int r,s,p;


void calc();
int main();

void calc()
{
	srand(time(0));
	if(p == 1)
	{
		a = one + rand() % two;
		b = one + rand() % two;
	}
	
	if(p == 2)
	{
		a = two + rand() % one;
		b = two + rand() % one;
	}
	
	if(p == 3)
	{
		a = one + rand() % two;
		b = one + rand() % two;
	}
	
	if(p == 4)
	{
		a = two + rand() % one;
		b = two + rand() % one;
	}
	cout << "�������������� ������:" << endl;
	if (r == 1)
	{
		cout << a << "+" << b << "=  ?" << endl;
	}
	if (r == 2)
	{
		cout << a << "-" << b << "=  ?" << endl;
	}
	if (r == 3)
	{
		cout << a << "*" << b << "=  ?" << endl;
	}
	if (r == 4)
	{
		cout << a << "/" << b << "=  ?" << endl;
	}
	cin >>c;
	if (s == 1)
	{
		if(c == a+b)
		{
			system("cls");
			cout << "�� ��������� �������(����� ��������� ������� 999 ���������� ���������)" << endl;
			i= i+1;
			calc();
		}
		else if(c == 999)
		{
			cout << "�� ������� ��������� " << i << " ����������� :" << j << endl;
			exit(0);
		}
			
		else
		{
			system("cls");
			cout << "�� �� ��������� ����� ������" << endl;
			cout << "����� ������ ������!" << endl;
			j = j + 1;
			Sleep(1000);
			system("cls");
			calc();
		}
	}
	
	if (s == 2)
	{
		if(c == a-b)
		{
			system("cls");
			cout << "�� ��������� �������(����� ��������� ������� 999 ���������� ���������)" << endl;
			i= i+1;
			calc();
		}
		else if(c == 999)
		{
			cout << "�� ������� ��������� " << i << " ����������� :" << j << endl;
			exit(0);
		}
			
		else
		{
			system("cls");
			cout << "�� �� ��������� ����� ������" << endl;
			cout << "����� ������ ������!" << endl;
			j = j + 1;
			Sleep(1000);
			system("cls");
			calc();
		}
	}
	
	if (s == 3)
	{
		if(c == a*b)
		{
			system("cls");
			cout << "�� ��������� �������(����� ��������� ������� 999 ���������� ���������)" << endl;
			i= i+1;
			calc();
		}
		else if(c == 999)
		{
			cout << "�� ������� ��������� " << i << " ����������� :" << j << endl;
			exit(0);
		}
			
		else
		{
			system("cls");
			cout << "�� �� ��������� ����� ������" << endl;
			cout << "����� ������ ������!" << endl;
			j = j + 1;
			Sleep(1000);
			system("cls");
			calc();
		}
	}
	
	if (s == 4)
	{
		if(c == a/b)
		{
			system("cls");
			cout << "�� ��������� �������(����� ��������� ������� 999 ���������� ���������)" << endl;
			i= i+1;
			calc();
		}
		else if(c == 999)
		{
			cout << "�� ������� ��������� " << i << " ����������� :" << j << endl;
			exit(0);
		}
			
		else
		{
			system("cls");
			cout << "�� �� ��������� ����� ������" << endl;
			cout << "����� ������ ������!" << endl;
			j = j + 1;
			Sleep(1000);
			system("cls");
			calc();
		}
	}
	if(c == a+b)
	{
		system("cls");
		cout << "�� ��������� �������(����� ��������� ������� 999 ���������� ���������)" << endl;
		i= i+1;
		calc();
	}
	else if(c == 999)
	{
		cout << "�� ������� ��������� " << i << " ����������� :" << j << endl;
		exit(0);
	}
		
	else
	{
		system("cls");
		cout << "�� �� ��������� ����� ������" << endl;
		cout << "����� ������ ������!" << endl;
		j = j + 1;
		Sleep(1000);
		system("cls");
		calc();
	}
}
int main()
{
	int vod;
	setlocale(0,"Russian");
	cout << "����� ����������� ����� �������" << endl;
	cin >> one;
	cout << "����� ������������ ����� �������" << endl;
	cin >> two;
	if (one > two)
	{
		cout << "������ ����������� ����� �� ����� ���� ������ �������������!" << endl;
		exit(0);
	}
	cout << "������� �������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������)" << endl;
	cin >> vod;
	switch (vod)
	{
	
		case 1:
			r = 1;
			s = 1;
			p = 1;
			calc();
		break;
		
		case 2:
			r = 2;
			s = 2;
			p = 1;
			calc();
		break;
		
		case 3:
			r = 3;
			s = 3;
			p = 1;
			calc();
		break;
		
		case 4:
			r = 4;
			s = 4;
			p = 1;
			calc();
		break;
		
		default :
			cout << "EROR!" << endl;
		break;
	}
	
	return 0;
}
// ���� � �� ����� �+�
