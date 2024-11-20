#include <iostream>
using namespace std;

int main() {
    int year1, year2, count = 0;
    cout << "������ ������ ��: ";
    cin >> year1;
    cout << "������ ������ ��: ";
    cin >> year2;

    if (year1 >= year2 || year1 <= 0 || year2 <= 0) {
        cout << "����������� �������� ����!" << endl;
        return 1;
    }

    int diff = year2 - year1;
    if (diff > 100) {
        cout << "г����� ����� 100 ����. �����." << endl;
        return 0;
    }

    for (int i = year1; i <= year2; i++) {
        if ((i - year1) % 10 == 0) {
            count++;
        }
        cout << i << " ";
    }
    cout << endl;

    cout << "ʳ������ ������ 10 ����: " << count << endl;

    return 0;
}
