#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Account {
    string owner;
    double balance;
};

void createAccount(vector<Account>& accounts) {
    Account newAccount;
    cout << "Введіть ім'я власника рахунку: ";
    cin >> newAccount.owner;
    cout << "Введіть початковий баланс: ";
    cin >> newAccount.balance;
    accounts.push_back(newAccount);
    cout << "Рахунок створено успішно!" << endl;
}

void deposit(Account* account) {
    double amount;
    cout << "Введіть суму для поповнення: ";
    cin >> amount;
    if (amount > 0) {
        account->balance += amount;
        cout << "Рахунок поповнено успішно!" << endl;
    }
    else {
        cout << "Невірна сума для поповнення!" << endl;
    }
}

void withdraw(Account* account) {
    double amount;
    cout << "Введіть суму для зняття: ";
    cin >> amount;
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        cout << "Кошти знято успішно!" << endl;
    }
    else {
        cout << "Недостатньо коштів або невірна сума!" << endl;
    }
}

void displayAccounts(const vector<Account>& accounts) {
    if (accounts.empty()) {
        cout << "Немає доступних рахунків." << endl;
        return;
    }
    cout << "Інформація про рахунки:" << endl;
    for (const auto& account : accounts) {
        cout << "Власник: " << account.owner << ", Баланс: " << account.balance << endl;
    }
}

int main() {
    vector<Account> accounts;
    int choice;
    do {
        cout << "\nМеню:\n";
        cout << "1. Створити рахунок\n";
        cout << "2. Поповнити рахунок\n";
        cout << "3. Зняти кошти\n";
        cout << "4. Відобразити інформацію про рахунки\n";
        cout << "5. Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            createAccount(accounts);
            break;
        }
        case 2: {
            if (accounts.empty()) {
                cout << "Немає доступних рахунків для поповнення." << endl;
                break;
            }
            int index;
            cout << "Введіть номер рахунку для поповнення (0-" << accounts.size() - 1 << "): ";
            cin >> index;
            if (index >= 0 && index < accounts.size()) {
                deposit(&accounts[index]);
            }
            else {
                cout << "Невірний номер рахунку!" << endl;
            }
            break;
        }
        case 3: {
            if (accounts.empty()) {
                cout << "Немає доступних рахунків для зняття коштів." << endl;
                break;
            }
            int index;
            cout << "Введіть номер рахунку для зняття (0-" << accounts.size() - 1 << "): ";
            cin >> index;
            if (index >= 0 && index < accounts.size()) {
                withdraw(&accounts[index]);
            }
            else {
                cout << "Невірний номер рахунку!" << endl;
            }
            break;
        }
        case 4: {
            displayAccounts(accounts);
            break;
        }
        case 5: {
            cout << "Вихід з програми." << endl;
            break;
        }
        default: {
            cout << "Невірний вибір. Спробуйте ще раз." << endl;
        }
        }
    } while (choice != 5);

    return 0;
}
