#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "������ ���� �����: ";
    cin >> num;
    cout << "������� ��� ����� �� 7: " << num % 7 << endl;

    int num1, num2;
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;

    if (num2 != 0 && num1 % num2 == 0) {
        cout << "����� ����� ������� �� ����� ��� �������." << endl;
    }
    else {
        cout << "����� ����� �� ������� �� ����� ��� �������." << endl;
    }

    cout << "����� ����� �����: " << (num1 % 2 == 0 ? "���" : "�") << endl;
    cout << "����� ����� �����: " << (num2 % 2 == 0 ? "���" : "�") << endl;

    return 0;
}
