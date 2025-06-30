#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

class Factorial {
public:
    string getLastFourDigits(int n) {
        if (n <= 6) {
            int fact = 1;
            for (int i = 2; i <= n; i++) {
                fact *= i;
            }
            return to_string(fact);
        } else {
            int fact = 1;
            for (int i = 2; i <= n; i++) {
                fact = (fact * i) % 10000;
            }
            ostringstream oss;
            oss << setw(4) << setfill('0') << fact;
            return oss.str();
        }
    }
};

int main() {
    int N;
    cin >> N;
    Factorial f;
    cout << f.getLastFourDigits(N) << endl;
    return 0;
}

