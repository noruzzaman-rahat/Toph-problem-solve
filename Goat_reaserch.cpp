#include <iostream>
#include <vector>
#include <string>
using namespace std;

class GoatSounds {
private:
    int N;
    vector<string> lines;
    vector<string> adjustedLines;

public:
    void readInput() {
        cin >> N;
        cin.ignore();
        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            lines.push_back(s);
        }
    }

    void processLines() {
        for (auto &line : lines) {
            int a_count = line.length() - 1;
            if (a_count % 2 != 0) {
                if (a_count == 1) {
                    a_count = 2;
                } else {
                    a_count -= 1;
                }
            }
            string new_line = "b";
            for (int i = 0; i < a_count; i++) {
                new_line += "a";
            }
            adjustedLines.push_back(new_line);
        }
    }

    void printCentered() {

        int maxLen = 0;
        for (auto &line : adjustedLines) {
            if ((int)line.length() > maxLen) maxLen = (int)line.length();
        }

        for (auto &line : adjustedLines) {
            int spaces = maxLen - (int)line.length();


            int pad = spaces / 2;
            for (int i = 0; i < pad; i++) cout << " ";
            cout << line << "\n";
        }
    }
};

int main() {
    GoatSounds gs;
    gs.readInput();
    gs.processLines();
    gs.printCentered();

    return 0;
}

