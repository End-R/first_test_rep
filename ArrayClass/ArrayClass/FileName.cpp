#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class timer {
	int seconds;
public:
	// секунды, задаваемые в виде строки
	timer(char* t) { seconds = atoi(t); }
	// секунды, задаваемые в виде целого числа
	timer(int t) { seconds = t; }
	// время, задаваемое в минутах и секундах
	timer(int min, int sec) { seconds = min * 60 + sec; }
	void run();
};
void timer::run()
{
	clock_t t1;
	t1 = clock();
	while ((clock() / CLOCKS_PER_SEC - t1 / CLOCKS_PER_SEC) < seconds);
	cout << "\a"; // звуковой сигнал
}
int main()
{
	setlocale(LC_ALL, "rus");
	timer a(10);
	a.run();
	cout << "Введите количество секунд: ";
	char str[80];
	cin >> str;
	timer b(str); // инициализация в динамике
	b.run();
	cout << "Введите минуты и секунды: ";
	int min, sec;
	cin >> min >> sec;
	timer c(min, sec); // инициализация в динамике
	c.run();
	return 0;
}
