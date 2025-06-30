#include <iostream>
using namespace std;

class PyramidPrinter {
private:
    int N;
public:
    PyramidPrinter(int n) : N(n) {}

    void print() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                cout << ' ';
            }
            cout << '*';
            for (int j = 0; j < i; j++) {
                cout << ' ' << '*';
            }
            cout << '\n';
        }
    }
};

int main() {
    int n;
    cin >> n;
    PyramidPrinter printer(n);
    printer.print();
    return 0;
}
