#include <iostream>
#include <cstdlib> // для rand() и srand()
#include <ctime>   // для time()

using namespace std;

void play(int m);

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int list[10];
    int size = 10;

    for (int i = 0; i < size; i++) list[i] = rand() % 100;
    cout << "Исходный массив: ";
    for (int t = 0; t < size; t++) cout << list[t] << ' ';
    cout << '\n';

    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--) {
            if (list[j-1] > list[j])
            {
                int temp = list[j - 1];
                list[j - 1] = list[j];
                list[j] = temp;
            }
        }
    }

    // Отображаем отсортированный массив
    cout << "Отсортированный массив: ";
    for (int t = 0; t < size; t++)
        cout << list[t] << ' ';
  
    return 0;
}

