#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");  // Исправлено "RU" на "Russian"
    system("chcp 1251");

    ifstream in;
    // Исправленный путь (экранирование слешей или использование raw-строки)
    in.open(R"(C:\Users\Вячеслав\Desktop\abc.txt)");  // Убран ios::app

    if (!in.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    double number;
    int count5 = 0;
    double sum = 0;

    while (in >> number) {
        if (number == 5.0) {
            count5++;
        }
        if (number > 0) {
            sum += number;
        }
    }  // Все числа обработаны перед закрытием файла

    in.close();

    cout << "Количество элементов, равных 5: " << count5 << endl;
    cout << "Сумма положительных элементов: " << sum << endl;

    return 0;
}