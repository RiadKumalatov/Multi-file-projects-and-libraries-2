#include <iostream>
#include <string>
#include "Counter.h"

int main() {
    setlocale(LC_ALL, "Russian");

    std::string response;
    std::cout << "�� ������ ������� ��������� �������� ��������? ������� yes ��� no: ";
    std::getline(std::cin, response);

    int initialValue = 1;
    if (response == "yes") {
        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> initialValue;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    Counter counter(initialValue);

    char command;
    while (true) {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
            std::cout << "�� ��������!" << std::endl;
            return 0;
        default:
            std::cout << "�������� �������. ���������� ��� ���." << std::endl;
            continue;
        }
    }
}
