#include <iostream>
#include <string>
#include "Counter.h"

int main() {
    setlocale(LC_ALL, "Russian");

    std::string response;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::getline(std::cin, response);

    int initialValue = 1;
    if (response == "yes") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    Counter counter(initialValue);

    char command;
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.getCurrentValue() << std::endl;
            break;
        case 'x':
            std::cout << "До свидания!" << std::endl;
            return 0;
        default:
            std::cout << "Неверная команда. Попробуйте еще раз." << std::endl;
            continue;
        }
    }
}
