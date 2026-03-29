#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int total_score = 0;
        int current_score = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'O') {
                current_score++;
                total_score += current_score;
            } else {
                current_score = 0;
            }
        }

        cout << total_score << "\n";
    }

    return 0;
}