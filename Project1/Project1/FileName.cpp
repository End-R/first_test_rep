// Демонстрация доступа к членам класса.
#include <iostream>
using namespace std;
class myclass {
	int a; // закрытые данные
public:
	int b; // открытые данные
	void setab(int i); // открытые функции
	int geta();
	void reset();
};
void myclass::setab(int i)
{
	a = i; // прямое обращение к переменной а
	b = i * i; // прямое обращение к переменной b
}
int myclass::geta()
{
	return a; // прямое обращение к переменной а
}
void myclass::reset()
{
	// Прямой вызов функции setab()
	setab(0); // для уже известного объекта.
}
int main()
{
	setlocale(LC_ALL, "rus");
	myclass ob;
	ob.setab(5); // Устанавливаем члены данных ob.a и ob.b.
	cout << "Объект ob после вызова функции setab(5): ";
	cout << ob.geta() << ' ';
	cout << ob.b; // К члену b можно получить прямой доступ, поскольку он является public - членом.
	
		cout << '\n';
	ob.b = 20; // Член b можно установить напрямую, поскольку он является public - членом.
	 
		cout << "Объект ob после установки члена ob.b=20: ";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	ob.reset();
	cout << "Объект ob после вызова функции ob.reset(): ";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	return 0;
}


	
	
