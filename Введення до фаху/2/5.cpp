#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;

    cout << "������ num1: " << &num1 << ", ������ num2: " << &num2 << endl;

    for (int i = num1; i <= num2; i++) {
        cout << -i << " ";
    }
    cout << endl;

    return 0;
}
