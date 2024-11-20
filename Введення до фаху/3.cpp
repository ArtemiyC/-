#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

string sum(string a, string b) {
    return a + b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int min(const int& a, const int& b) {
    return (a < b) ? a : b;
}

double area(double side) {
    return side * side;
}

double area(double length, double width) {
    return length * width;
}

double area_circle(double radius) {
    return M_PI * radius * radius;
}

double area_triangle(double base, double height) {
    return 0.5 * base * height;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int factorial(int& n) {
    if (n <= 1) return 1;
    int temp = n;
    return temp * factorial(--n);
}

void draw_square(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void execute_all() {
    cout << "Сума цілих чисел: " << sum(3, 5) << endl;
    cout << "Сума чисел з плаваючою точкою: " << sum(3.2, 5.8) << endl;
    cout << "Сума рядків: " << sum(string("Привіт "), string("Світ")) << endl;

    int a = 10, b = 20;
    cout << "Мінімум за значенням: " << min(a, b) << endl;
    cout << "Мінімум за посиланням: " << min(a, b) << endl;

    cout << "Площа квадрата: " << area(4.0) << endl;
    cout << "Площа прямокутника: " << area(4.0, 5.0) << endl;
    cout << "Площа кола: " << area_circle(3.0) << endl;
    cout << "Площа трикутника: " << area_triangle(4.0, 5.0) << endl;

    cout << "Значення до обміну: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "Значення після обміну: a = " << a << ", b = " << b << endl;

    int n = 5;
    cout << "Факторіал числа " << n << ": " << factorial(n) << endl;

    cout << "Квадрат:" << endl;
    draw_square(5);
}

int main() {
    execute_all();
    return 0;
}
