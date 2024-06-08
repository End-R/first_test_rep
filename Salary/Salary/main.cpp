
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
	int choiсe;
	do {
		choiсe = menu();
		switch (choiсe)
		{
		case 0: break;
		case 1: enter();
			break;
		case 2: report();
			break;
		default: cout << "По пробуйте еще раз!" << endl;
			break;
		}

	} while (choiсe != 0);

	return 0;
}

int menu() {
	int choice;
	cout << "0: Выход из программы" << endl;
	cout << "1: Добавить сотрудника" << endl;
	cout << "2: Получить отчет" << endl;
	cin >> choice;

	return choice;
}

void enter() {
	for (int i = 0; i < 2; i++)
	{
		cout << "Введите имя сотрудника: ";
		cin >> name[i];
		cout << "Введите номер сотрудника: ";
		cin >> phone[i];
		cout << "Введите зарплату сотрудника: ";
		cin >> salary[i];
		cout << "Введите количество отработанных часов: ";
		cin >> hours[i];

	}
}
void report() {
	for (int i = 0; i < 2; i++)
	{
		cout << name[i] << ' ' << phone[i] << '\n';
		cout << "Заработная плата за неделю: " << salary[i] * hours[i];
		cout << '\n';
	}
}
