#include <iostream>
using namespace std;

int main() {
    int year1, year2, count = 0;
    cout << "Введіть перший рік: ";
    cin >> year1;
    cout << "Введіть другий рік: ";
    cin >> year2;

    if (year1 >= year2 || year1 <= 0 || year2 <= 0) {
        cout << "Неправильне значення років!" << endl;
        return 1;
    }

    int diff = year2 - year1;
    if (diff > 100) {
        cout << "Різниця більше 100 років. Вихід." << endl;
        return 0;
    }

    for (int i = year1; i <= year2; i++) {
        if ((i - year1) % 10 == 0) {
            count++;
        }
        cout << i << " ";
    }
    cout << endl;

    cout << "Кількість кожних 10 років: " << count << endl;

    return 0;
}
