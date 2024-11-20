#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть число N: ";
    cin >> N;

    int evenSum = 0, oddSum = 0, totalSum = 0;

    for (int i = 1; i <= N; i++) {
        totalSum += i;
        if (i % 2 == 0) {
            evenSum += i;
            cout << i << " ";
        }
        else {
            oddSum += i;
        }
    }
    cout << endl;

    cout << "Сума парних: " << evenSum << endl;
    cout << "Сума всіх: " << totalSum << endl;
    cout << "Сума непарних: " << oddSum << endl;

    double result = static_cast<double>(evenSum + totalSum + oddSum) / 2;
    cout << "Результат: " << result << endl;

    return 0;
}
