#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "������ ������ (0-100): ";
    cin >> grade;

    if (grade >= 90) {
        cout << "³�����" << endl;
    }
    else if (grade >= 75) {
        cout << "�����" << endl;
    }
    else if (grade >= 50) {
        cout << "���������" << endl;
    }
    else {
        cout << "�����������" << endl;
    }

    return 0;
}
