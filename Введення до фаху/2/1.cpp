#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "¬вед≥ть число N: ";
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

    cout << "—ума парних: " << evenSum << endl;
    cout << "—ума вс≥х: " << totalSum << endl;
    cout << "—ума непарних: " << oddSum << endl;

    double result = static_cast<double>(evenSum + totalSum + oddSum) / 2;
    cout << "–езультат: " << result << endl;

    return 0;
}
