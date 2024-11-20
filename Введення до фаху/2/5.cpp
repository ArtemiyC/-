#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;

    cout << "Адреса num1: " << &num1 << ", Адреса num2: " << &num2 << endl;

    for (int i = num1; i <= num2; i++) {
        cout << -i << " ";
    }
    cout << endl;

    return 0;
}
