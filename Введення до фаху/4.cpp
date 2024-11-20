#include <iostream>
using namespace std;

void copyValue(int* source, int* destination) {
    *destination = *source;
}

void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {
    *evenCount = (*a % 2 == 0) + (*b % 2 == 0) + (*c % 2 == 0);
    *oddCount = 3 - *evenCount;
}

void multiply(int* a, int* b, int* result) {
    *result = (*a) * (*b);
}

void swapWithoutTemp(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void findMinMax(int* a, int* b, int* c, int* min, int* max) {
    *min = *a;
    *max = *a;
    if (*b < *min) *min = *b;
    if (*c < *min) *min = *c;
    if (*b > *max) *max = *b;
    if (*c > *max) *max = *c;
}

int main() {
    int x = 5, y = 10, z = 15;
    int result = 0, evenCount = 0, oddCount = 0, min = 0, max = 0;

    cout << "Значення до копіювання: x = " << x << ", y = " << y << endl;
    copyValue(&x, &y);
    cout << "Значення після копіювання: x = " << x << ", y = " << y << endl;

    countEvenOdd(&x, &y, &z, &evenCount, &oddCount);
    cout << "Парних чисел: " << evenCount << ", Непарних чисел: " << oddCount << endl;

    multiply(&x, &z, &result);
    cout << "Результат множення x і z: " << result << endl;

    cout << "Значення до обміну: x = " << x << ", y = " << y << endl;
    swapWithoutTemp(&x, &y);
    cout << "Значення після обміну: x = " << x << ", y = " << y << endl;

    findMinMax(&x, &y, &z, &min, &max);
    cout << "Мінімальне: " << min << ", Максимальне: " << max << endl;

    return 0;
}
