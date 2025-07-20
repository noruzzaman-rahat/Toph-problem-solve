#include <iostream>
using namespace std;

class ChocolatesDistribution {
private:
    int X, Y;

public:
    ChocolatesDistribution(int x, int y) {
        X = x;
        Y = y;
    }

    int extraChocolates() {
        int remainder = Y % X;
        if (remainder == 0) {
            return 0;
        } else {
            return X - remainder;
        }
    }
};

int main() {
    int X, Y;
    cin >> X >> Y;

    ChocolatesDistribution cd(X, Y);
    cout << cd.extraChocolates() << endl;

    return 0;
}

