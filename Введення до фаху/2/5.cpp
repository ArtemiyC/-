#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "¬вед≥ть перше число: ";
    cin >> num1;
    cout << "¬вед≥ть друге число: ";
    cin >> num2;

    cout << "јдреса num1: " << &num1 << ", јдреса num2: " << &num2 << endl;

    for (int i = num1; i <= num2; i++) {
        cout << -i << " ";
    }
    cout << endl;

    return 0;
}
