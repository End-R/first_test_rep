#include <iostream>
#include <string>
using namespace std;

class Critter
{
	public:
		Critter(int hunger = 0, int boredom = 0);
		void talk();
		void eat(int food = 4);
		void play(int fun = 4);
		int getMood() const;
	private:
		int m_hunger;
		int m_boredom;
		
		void PassTime(int time = 1);
};
Critter::Critter(int hunger, int boredom) : m_hunger(hunger), m_boredom(boredom) {};
inline int Critter::getMood()const {
	return (m_hunger + m_boredom);
}
void Critter::PassTime(int time)
{
	m_hunger += time;
	m_boredom += time;
}
void Critter::talk() {
	cout << "I'm a critter and I feel ";
	int mood = getMood();
	if (mood > 15)
	{
		cout << "mad" << endl;
	}
	else if (mood > 10)
	{
		cout << "frustrated" << endl;
	}
	else if (mood > 5)
	{
		cout << "okay" << endl;
	}
	else 
	{
		cout << "happy" << endl;
	}
	PassTime();
}
void Critter::eat(int food) {
	cout << "Brrrupp" << endl;
	m_hunger -= food;
	if (m_hunger < 0) {
		m_hunger = 0;
	}
	PassTime();
}
void Critter::play(int fun)
{
	cout << "Wheee" << endl;
	m_boredom -= fun;
	if (m_boredom < 0)
	{
		m_boredom = 0;
	}
	PassTime();
}

int main() {
	Critter crit;
	
	int choice;
	do {
		cout << "\nCritter Caretaker\n\n";
		cout << "0 - Quit\n";
		cout << "1 - Listen to your critter\n";
		cout << "2 - Feed your critter\n";
		cout << "3 - Play with your critter\n";
		cout << "4 - Check mood\n";
		cout << "Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "Bye bye!!\n";
			break;
		case 1:
			crit.talk();
			break;
		case 2:
			crit.eat();
			break;
		case 3:
			crit.play();
			break;
		case 4:
			cout << crit.getMood();
			break;
		default:
			cout << "\nSorry, but " << choice << "is not a valid choice.\n";
		}	
	} while (choice != 0);
	return 0;
}