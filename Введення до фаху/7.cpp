#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    double grade;
};

void addStudent(Student*& students, int& size, const string& name, double grade) {
    Student* newStudents = new Student[size + 1];
    for (int i = 0; i < size; ++i) {
        newStudents[i] = students[i];
    }
    newStudents[size].name = name;
    newStudents[size].grade = grade;
    delete[] students;
    students = newStudents;
    ++size;
}

void removeStudent(Student*& students, int& size, const string& name) {
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (students[i].name == name) {
            index = i;
            break;
        }
    }
    if (index == -1) return;

    Student* newStudents = new Student[size - 1];
    for (int i = 0, j = 0; i < size; ++i) {
        if (i != index) {
            newStudents[j++] = students[i];
        }
    }
    delete[] students;
    students = newStudents;
    --size;
}

double calculateAverage(const Student* students, int size) {
    if (size == 0) return 0.0;
    double total = 0;
    for (int i = 0; i < size; ++i) {
        total += students[i].grade;
    }
    return total / size;
}

void displayStudents(const Student* students, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Ім'я: " << students[i].name << ", Оцінка: " << students[i].grade << endl;
    }
}

int main() {
    Student* students = nullptr;
    int size = 0;
    int choice;

    do {
        cout << "1. Додати студента\n2. Видалити студента\n3. Середній бал\n4. Показати список\n0. Вихід\n";
        cin >> choice;

        if (choice == 1) {
            string name;
            double grade;
            cout << "Ім'я: ";
            cin >> name;
            cout << "Оцінка: ";
            cin >> grade;
            addStudent(students, size, name, grade);
        }
        else if (choice == 2) {
            string name;
            cout << "Ім'я: ";
            cin >> name;
            removeStudent(students, size, name);
        }
        else if (choice == 3) {
            cout << "Середній бал: " << calculateAverage(students, size) << endl;
        }
        else if (choice == 4) {
            displayStudents(students, size);
        }
    } while (choice != 0);

    delete[] students;
    return 0;
}
