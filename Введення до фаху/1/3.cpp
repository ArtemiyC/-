#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "������ ���� �����: ";
    cin >> num;

    cout << "�� �������������: " << num << endl;
    cout << "���������� �������������: " << num++ << endl;
    cout << "ϳ��� ���������� �������������: " << num << endl;

    cout << "��������� �������������: " << ++num << endl;

    cout << "�� �������������: " << num << endl;
    cout << "���������� �������������: " << num-- << endl;
    cout << "ϳ��� ���������� �������������: " << num << endl;

    cout << "��������� �������������: " << --num << endl;

    return 0;
}
