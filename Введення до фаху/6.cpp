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
        cout << "1. ������ �����\n2. �������� �����\n3. ������� �������\n4. �������� ������\n5. �������� �������\n0. �����\n";
        cin >> choice;

        if (choice == 1) {
            Product p;
            cout << "�����: ";
            cin >> p.name;
            cout << "ʳ������: ";
            cin >> p.quantity;
            cout << "ֳ��: ";
            cin >> p.price;
            inventory.push_back(p);
        }
        else if (choice == 2) {
            string name;
            cout << "�����: ";
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
            cout << "�����: ";
            cin >> name;
            cout << "���� �������: ";
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
                cout << "�����: " << p.name << ", ʳ������: " << p.quantity << ", ֳ��: " << p.price << endl;
            }
        }
        else if (choice == 5) {
            double total = 0;
            for (const auto& p : inventory) {
                total += p.quantity * p.price;
            }
            cout << "�������� �������: " << total << endl;
        }
    } while (choice != 0);

    return 0;
}
