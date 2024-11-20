#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть ціле число: ";
    cin >> num;

    cout << "До інкрементації: " << num << endl;
    cout << "Постфіксна інкрементація: " << num++ << endl;
    cout << "Після постфіксної інкрементації: " << num << endl;

    cout << "Префіксна інкрементація: " << ++num << endl;

    cout << "До декрементації: " << num << endl;
    cout << "Постфіксна декрементація: " << num-- << endl;
    cout << "Після постфіксної декрементації: " << num << endl;

    cout << "Префіксна декрементація: " << --num << endl;

    return 0;
}
