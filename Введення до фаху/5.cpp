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
    cout << "������ ��'� �������� �������: ";
    cin >> newAccount.owner;
    cout << "������ ���������� ������: ";
    cin >> newAccount.balance;
    accounts.push_back(newAccount);
    cout << "������� �������� ������!" << endl;
}

void deposit(Account* account) {
    double amount;
    cout << "������ ���� ��� ����������: ";
    cin >> amount;
    if (amount > 0) {
        account->balance += amount;
        cout << "������� ��������� ������!" << endl;
    }
    else {
        cout << "������ ���� ��� ����������!" << endl;
    }
}

void withdraw(Account* account) {
    double amount;
    cout << "������ ���� ��� ������: ";
    cin >> amount;
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        cout << "����� ����� ������!" << endl;
    }
    else {
        cout << "����������� ����� ��� ������ ����!" << endl;
    }
}

void displayAccounts(const vector<Account>& accounts) {
    if (accounts.empty()) {
        cout << "���� ��������� �������." << endl;
        return;
    }
    cout << "���������� ��� �������:" << endl;
    for (const auto& account : accounts) {
        cout << "�������: " << account.owner << ", ������: " << account.balance << endl;
    }
}

int main() {
    vector<Account> accounts;
    int choice;
    do {
        cout << "\n����:\n";
        cout << "1. �������� �������\n";
        cout << "2. ��������� �������\n";
        cout << "3. ����� �����\n";
        cout << "4. ³��������� ���������� ��� �������\n";
        cout << "5. �����\n";
        cout << "��� ����: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            createAccount(accounts);
            break;
        }
        case 2: {
            if (accounts.empty()) {
                cout << "���� ��������� ������� ��� ����������." << endl;
                break;
            }
            int index;
            cout << "������ ����� ������� ��� ���������� (0-" << accounts.size() - 1 << "): ";
            cin >> index;
            if (index >= 0 && index < accounts.size()) {
                deposit(&accounts[index]);
            }
            else {
                cout << "������� ����� �������!" << endl;
            }
            break;
        }
        case 3: {
            if (accounts.empty()) {
                cout << "���� ��������� ������� ��� ������ �����." << endl;
                break;
            }
            int index;
            cout << "������ ����� ������� ��� ������ (0-" << accounts.size() - 1 << "): ";
            cin >> index;
            if (index >= 0 && index < accounts.size()) {
                withdraw(&accounts[index]);
            }
            else {
                cout << "������� ����� �������!" << endl;
            }
            break;
        }
        case 4: {
            displayAccounts(accounts);
            break;
        }
        case 5: {
            cout << "����� � ��������." << endl;
            break;
        }
        default: {
            cout << "������� ����. ��������� �� ���." << endl;
        }
        }
    } while (choice != 5);

    return 0;
}
