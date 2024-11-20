#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть ціле число: ";
    cin >> num;
    cout << "Залишок при діленні на 7: " << num % 7 << endl;

    int num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;

    if (num2 != 0 && num1 % num2 == 0) {
        cout << "Перше число ділиться на друге без залишку." << endl;
    }
    else {
        cout << "Перше число не ділиться на друге без залишку." << endl;
    }

    cout << "Перше число парне: " << (num1 % 2 == 0 ? "так" : "ні") << endl;
    cout << "Друге число парне: " << (num2 % 2 == 0 ? "так" : "ні") << endl;

    return 0;
}
