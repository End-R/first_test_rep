
#include <iostream>

using namespace std;

char name[2][80];
char phone[2][20];
int salary[2];
float hours[2];

int menu();
void enter(), report();

int main() {

	setlocale(LC_ALL, "ru");
	int choi�e;
	do {
		choi�e = menu();
		switch (choi�e)
		{
		case 0: break;
		case 1: enter();
			break;
		case 2: report();
			break;
		default: cout << "�� �������� ��� ���!" << endl;
			break;
		}

	} while (choi�e != 0);

	return 0;
}

int menu() {
	int choice;
	cout << "0: ����� �� ���������" << endl;
	cout << "1: �������� ����������" << endl;
	cout << "2: �������� �����" << endl;
	cin >> choice;

	return choice;
}

void enter() {
	for (int i = 0; i < 2; i++)
	{
		cout << "������� ��� ����������: ";
		cin >> name[i];
		cout << "������� ����� ����������: ";
		cin >> phone[i];
		cout << "������� �������� ����������: ";
		cin >> salary[i];
		cout << "������� ���������� ������������ �����: ";
		cin >> hours[i];

	}
}
void report() {
	for (int i = 0; i < 2; i++)
	{
		cout << name[i] << ' ' << phone[i] << '\n';
		cout << "���������� ����� �� ������: " << salary[i] * hours[i];
		cout << '\n';
	}
}
