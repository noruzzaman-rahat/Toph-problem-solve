#include <iostream>
using namespace std;

class ByangAdder {
private:
    int A, B;

public:
    ByangAdder(int a, int b) {
        A = a;
        B = b;
    }

    void checkCarry() {
        int carry = 0;
        bool confused = false;

        int a = A, b = B;

        while (a > 0 || b > 0) {
            int digitA = a % 10;
            int digitB = b % 10;

            if (digitA + digitB + carry >= 10) {
                confused = true;
                break;
            }

            carry = (digitA + digitB + carry) / 10;

            a /= 10;
            b /= 10;
        }

        if (confused) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
};

int main() {
    int A, B;
    cin >> A >> B;

    ByangAdder adder(A, B);
    adder.checkCarry();

    return 0;
}
