#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    string position;
    int goals;
    int matches;
    double rating;
};

void addPlayer(vector<Player>& team, const string& name, const string& position, int goals, int matches, double rating) {
    team.push_back({ name, position, goals, matches, rating });
}

void displayPlayers(const vector<Player>& team) {
    for (const auto& player : team) {
        cout << "��'�: " << player.name
            << ", �������: " << player.position
            << ", ����: " << player.goals
            << ", �����: " << player.matches
            << ", �������: " << player.rating << endl;
    }
}

void searchPlayersByPosition(const vector<Player>& team, const string& position) {
    for (const auto& player : team) {
        if (player.position == position) {
            cout << "��'�: " << player.name
                << ", ����: " << player.goals
                << ", �����: " << player.matches
                << ", �������: " << player.rating << endl;
        }
    }
}

int calculateTotalGoals(const vector<Player>& team) {
    int totalGoals = 0;
    for (const auto& player : team) {
        totalGoals += player.goals;
    }
    return totalGoals;
}

Player findTopScorer(const vector<Player>& team) {
    return *max_element(team.begin(), team.end(), [](const Player& a, const Player& b) {
        return a.goals < b.goals;
        });
}

Player findBestRatedPlayer(const vector<Player>& team) {
    return *max_element(team.begin(), team.end(), [](const Player& a, const Player& b) {
        return a.rating < b.rating;
        });
}

void updatePlayerStats(vector<Player>& team, const string& name, int goals, int matches, double rating) {
    for (auto& player : team) {
        if (player.name == name) {
            player.goals = goals;
            player.matches = matches;
            player.rating = rating;
            return;
        }
    }
}

void formOptimalTeam(const vector<Player>& team) {
    vector<Player> sortedTeam = team;
    sort(sortedTeam.begin(), sortedTeam.end(), [](const Player& a, const Player& b) {
        return a.rating > b.rating;
        });
    cout << "����������� ����� (�� ���������):" << endl;
    for (const auto& player : sortedTeam) {
        cout << "��'�: " << player.name << ", �������: " << player.rating << endl;
    }
}

int main() {
    vector<Player> team;
    int choice;

    do {
        cout << "\n1. ������ ������\n2. �������� �������\n3. ����� �� ��������\n4. �������� ������� ����\n5. ��������� ���������\n6. ������� � �������� ���������\n7. ������� ��� ������\n8. ��������� �����\n0. �����\n";
        cin >> choice;

        if (choice == 1) {
            string name, position;
            int goals, matches;
            double rating;
            cout << "��'�: ";
            cin >> name;
            cout << "�������: ";
            cin >> position;
            cout << "����: ";
            cin >> goals;
            cout << "�����: ";
            cin >> matches;
            cout << "�������: ";
            cin >> rating;
            addPlayer(team, name, position, goals, matches, rating);
        }
        else if (choice == 2) {
            displayPlayers(team);
        }
        else if (choice == 3) {
            string position;
            cout << "�������: ";
            cin >> position;
            searchPlayersByPosition(team, position);
        }
        else if (choice == 4) {
            cout << "�������� ������� ����: " << calculateTotalGoals(team) << endl;
        }
        else if (choice == 5) {
            Player topScorer = findTopScorer(team);
            cout << "��������� ���������: " << topScorer.name << " � " << topScorer.goals << " ������." << endl;
        }
        else if (choice == 6) {
            Player bestPlayer = findBestRatedPlayer(team);
            cout << "������� � �������� ���������: " << bestPlayer.name << " (�������: " << bestPlayer.rating << ")" << endl;
        }
        else if (choice == 7) {
            string name;
            int goals, matches;
            double rating;
            cout << "��'�: ";
            cin >> name;
            cout << "��� ����: ";
            cin >> goals;
            cout << "��� �����: ";
            cin >> matches;
            cout << "����� �������: ";
            cin >> rating;
            updatePlayerStats(team, name, goals, matches, rating);
        }
        else if (choice == 8) {
            formOptimalTeam(team);
        }
    } while (choice != 0);

    return 0;
}
