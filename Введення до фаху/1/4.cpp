#include <iostream>
using namespace std;

int main() {
    int age, salary;
    cout << "Введіть ваш вік: ";
    cin >> age;
    cout << "Введіть вашу зарплату: ";
    cin >> salary;

    if (age > 20 && salary > 400 && salary < 1000) {
        cout << "We will consider your position" << endl;

        string firstName, lastName, desiredPosition;
        cout << "Введіть ваше ім'я: ";
        cin >> firstName;
        cout << "Введіть ваше прізвище: ";
        cin >> lastName;
        cout << "Введіть бажану посаду: ";
        cin >> desiredPosition;

        cout << "Ім'я: " << firstName << ", Прізвище: " << lastName << ", Посада: " << desiredPosition
            << ", Вік: " << age << ", Зарплата: " << salary << endl;
    }
    else {
        cout << "You are not suitable" << endl;
    }

    return 0;
}
