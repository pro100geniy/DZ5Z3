#include <iostream>
#include <windows.h>

using namespace std;
// Функция для ввода границ диапазона
void input(int& min, int& max) {
    cout << "Введите нижнюю границу диапазона: ";
    cin >> min;
    cout << "Введите верхнюю границу диапазона: ";
    cin >> max;
}

// Лямбда-выражение для генерации случайного числа
auto randomNumber = [&](int min, int max) -> int {
    return rand() % (max - min+1) + min; // генерируем случайное число от min до max
    };



// Inline-функция для вывода результата
inline void print(int value) {
    cout << value << endl;
}

int main() {
    setlocale(LC_ALL,"Rus"); 
    srand(time(NULL));
    int min, max;

    // Ввод границ диапазона
    input(min, max);

    // Бесконечный цикл
    while (true) {
              
        // Вывод результата
        print(randomNumber(min, max));

        // Замедление вывода результата
        Sleep(500);
    }

    return 0;
}