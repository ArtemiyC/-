#include <iostream>
using namespace std;

int main() {
    int age, salary;
    cout << "������ ��� ��: ";
    cin >> age;
    cout << "������ ���� ��������: ";
    cin >> salary;

    if (age > 20 && salary > 400 && salary < 1000) {
        cout << "We will consider your position" << endl;

        string firstName, lastName, desiredPosition;
        cout << "������ ���� ��'�: ";
        cin >> firstName;
        cout << "������ ���� �������: ";
        cin >> lastName;
        cout << "������ ������ ������: ";
        cin >> desiredPosition;

        cout << "��'�: " << firstName << ", �������: " << lastName << ", ������: " << desiredPosition
            << ", ³�: " << age << ", ��������: " << salary << endl;
    }
    else {
        cout << "You are not suitable" << endl;
    }

    return 0;
}
