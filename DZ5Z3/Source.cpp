#include <iostream>
#include <windows.h>

using namespace std;
// ������� ��� ����� ������ ���������
void input(int& min, int& max) {
    cout << "������� ������ ������� ���������: ";
    cin >> min;
    cout << "������� ������� ������� ���������: ";
    cin >> max;
}

// ������-��������� ��� ��������� ���������� �����
auto randomNumber = [&](int min, int max) -> int {
    return rand() % (max - min+1) + min; // ���������� ��������� ����� �� min �� max
    };



// Inline-������� ��� ������ ����������
inline void print(int value) {
    cout << value << endl;
}

int main() {
    setlocale(LC_ALL,"Rus"); 
    srand(time(NULL));
    int min, max;

    // ���� ������ ���������
    input(min, max);

    // ����������� ����
    while (true) {
              
        // ����� ����������
        print(randomNumber(min, max));

        // ���������� ������ ����������
        Sleep(500);
    }

    return 0;
}