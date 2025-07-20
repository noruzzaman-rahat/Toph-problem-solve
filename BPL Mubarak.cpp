#include <iostream>
#include <string>
using namespace std;

class CricketOver {
private:
    string outcome;
    int legalBalls;

public:
    CricketOver(string s) {
        outcome = s;
        legalBalls = 0;
    }

    void process() {
        for (char c : outcome) {
            if (c == 'N' || c == 'W' || c == 'D') {

                continue;
            } else {

                legalBalls++;
            }
        }
    }

    void printResult() {
        int overs = legalBalls / 6;
        int balls = legalBalls % 6;


        auto plural = [](int n, string singular, string plural) {
            return (n == 1) ? singular : plural;
        };

        if (overs > 0 && balls == 0) {

            cout << overs << " " << plural(overs, "OVER", "OVERS") << "\n";
        } else if (overs > 0 && balls > 0) {
            cout << overs << " " << plural(overs, "OVER", "OVERS") << " "
                 << balls << " " << plural(balls, "BALL", "BALLS") << "\n";
        } else {

            cout << balls << " " << plural(balls, "BALL", "BALLS") << "\n";
        }
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        CricketOver co(s);
        co.process();
        co.printResult();
    }
    return 0;
}

