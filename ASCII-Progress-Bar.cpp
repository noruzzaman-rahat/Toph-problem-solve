#include <iostream>
#include <cmath>
using namespace std;

class ProgressBar {
private:
    double percentage;

public:
    ProgressBar(double p) {
        percentage = p;
    }

    void printBar() {

        int floored = (int)(floor(percentage / 10.0) * 10);

        int plusCount = floored / 10;
        int dotCount = 10 - plusCount;

        cout << "[";
        for (int i = 0; i < plusCount; i++) cout << "+";
        for (int i = 0; i < dotCount; i++) cout << ".";
        cout << "] " << (int)percentage << "%" << endl;
    }
};

int main() {
    double P;
    cin >> P;

    ProgressBar pb(P);
    pb.printBar();

    return 0;
}

