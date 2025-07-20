#include <iostream>
using namespace std;

class AscendingChecker {
private:
    int N;
    int numbers[100];

public:
    void readInput() {
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> numbers[i];
        }
    }

    void checkAscending() {
        bool ascending = true;
        for (int i = 1; i < N; i++) {
            if (numbers[i] < numbers[i - 1]) {
                ascending = false;
                break;
            }
        }

        if (ascending) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
};

int main() {
    AscendingChecker obj;
    obj.readInput();
    obj.checkAscending();

    return 0;
}

