#include <iostream>
#include <fstream>
#include "Header.h"
using namespace std;
// Основная функция программы
int main() {
    setlocale(LC_ALL, "RU");
    double calories; 
    double weight;    
    cout << "Введите калорийность на 100г продукта: ";
    cin >> calories;
    cout << "Введите вес продукта в граммах: ";
    cin >> weight;
    Product myProduct(calories, weight); 
    cout << "Общая калорийность продукта: " << myProduct.calculate() << endl;
    return 0;
}

