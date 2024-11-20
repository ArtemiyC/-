#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

int main() {
    vector<Product> inventory;
    int choice;
    do {
        cout << "1. Додати товар\n2. Видалити товар\n3. Оновити кількість\n4. Показати товари\n5. Загальна вартість\n0. Вихід\n";
        cin >> choice;

        if (choice == 1) {
            Product p;
            cout << "Назва: ";
            cin >> p.name;
            cout << "Кількість: ";
            cin >> p.quantity;
            cout << "Ціна: ";
            cin >> p.price;
            inventory.push_back(p);
        }
        else if (choice == 2) {
            string name;
            cout << "Назва: ";
            cin >> name;
            for (size_t i = 0; i < inventory.size(); ++i) {
                if (inventory[i].name == name) {
                    inventory.erase(inventory.begin() + i);
                    break;
                }
            }
        }
        else if (choice == 3) {
            string name;
            int quantity;
            cout << "Назва: ";
            cin >> name;
            cout << "Нова кількість: ";
            cin >> quantity;
            for (auto& p : inventory) {
                if (p.name == name) {
                    p.quantity = quantity;
                    break;
                }
            }
        }
        else if (choice == 4) {
            for (const auto& p : inventory) {
                cout << "Назва: " << p.name << ", Кількість: " << p.quantity << ", Ціна: " << p.price << endl;
            }
        }
        else if (choice == 5) {
            double total = 0;
            for (const auto& p : inventory) {
                total += p.quantity * p.price;
            }
            cout << "Загальна вартість: " << total << endl;
        }
    } while (choice != 0);

    return 0;
}
