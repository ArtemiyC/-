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
        cout << "Ім'я: " << player.name
            << ", Позиція: " << player.position
            << ", Голи: " << player.goals
            << ", Матчі: " << player.matches
            << ", Рейтинг: " << player.rating << endl;
    }
}

void searchPlayersByPosition(const vector<Player>& team, const string& position) {
    for (const auto& player : team) {
        if (player.position == position) {
            cout << "Ім'я: " << player.name
                << ", Голи: " << player.goals
                << ", Матчі: " << player.matches
                << ", Рейтинг: " << player.rating << endl;
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
    cout << "Оптимальний склад (за рейтингом):" << endl;
    for (const auto& player : sortedTeam) {
        cout << "Ім'я: " << player.name << ", Рейтинг: " << player.rating << endl;
    }
}

int main() {
    vector<Player> team;
    int choice;

    do {
        cout << "\n1. Додати гравця\n2. Показати гравців\n3. Пошук за позицією\n4. Загальна кількість голів\n5. Найкращий бомбардир\n6. Гравець з найвищим рейтингом\n7. Оновити дані гравця\n8. Формувати склад\n0. Вихід\n";
        cin >> choice;

        if (choice == 1) {
            string name, position;
            int goals, matches;
            double rating;
            cout << "Ім'я: ";
            cin >> name;
            cout << "Позиція: ";
            cin >> position;
            cout << "Голи: ";
            cin >> goals;
            cout << "Матчі: ";
            cin >> matches;
            cout << "Рейтинг: ";
            cin >> rating;
            addPlayer(team, name, position, goals, matches, rating);
        }
        else if (choice == 2) {
            displayPlayers(team);
        }
        else if (choice == 3) {
            string position;
            cout << "Позиція: ";
            cin >> position;
            searchPlayersByPosition(team, position);
        }
        else if (choice == 4) {
            cout << "Загальна кількість голів: " << calculateTotalGoals(team) << endl;
        }
        else if (choice == 5) {
            Player topScorer = findTopScorer(team);
            cout << "Найкращий бомбардир: " << topScorer.name << " з " << topScorer.goals << " голами." << endl;
        }
        else if (choice == 6) {
            Player bestPlayer = findBestRatedPlayer(team);
            cout << "Гравець з найвищим рейтингом: " << bestPlayer.name << " (Рейтинг: " << bestPlayer.rating << ")" << endl;
        }
        else if (choice == 7) {
            string name;
            int goals, matches;
            double rating;
            cout << "Ім'я: ";
            cin >> name;
            cout << "Нові голи: ";
            cin >> goals;
            cout << "Нові матчі: ";
            cin >> matches;
            cout << "Новий рейтинг: ";
            cin >> rating;
            updatePlayerStats(team, name, goals, matches, rating);
        }
        else if (choice == 8) {
            formOptimalTeam(team);
        }
    } while (choice != 0);

    return 0;
}
