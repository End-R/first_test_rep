// ������������ ������� � ������ ������.
#include <iostream>
using namespace std;
class myclass {
	int a; // �������� ������
public:
	int b; // �������� ������
	void setab(int i); // �������� �������
	int geta();
	void reset();
};
void myclass::setab(int i)
{
	a = i; // ������ ��������� � ���������� �
	b = i * i; // ������ ��������� � ���������� b
}
int myclass::geta()
{
	return a; // ������ ��������� � ���������� �
}
void myclass::reset()
{
	// ������ ����� ������� setab()
	setab(0); // ��� ��� ���������� �������.
}
int main()
{
	setlocale(LC_ALL, "rus");
	myclass ob;
	ob.setab(5); // ������������� ����� ������ ob.a � ob.b.
	cout << "������ ob ����� ������ ������� setab(5): ";
	cout << ob.geta() << ' ';
	cout << ob.b; // � ����� b ����� �������� ������ ������, ��������� �� �������� public - ������.
	
		cout << '\n';
	ob.b = 20; // ���� b ����� ���������� ��������, ��������� �� �������� public - ������.
	 
		cout << "������ ob ����� ��������� ����� ob.b=20: ";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	ob.reset();
	cout << "������ ob ����� ������ ������� ob.reset(): ";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	return 0;
}


	
	
