#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CashNotes {
private:
    int N;
    vector<int> notes = {500, 100, 50, 10, 5, 1};
    vector<int> usedNotes;

public:
    CashNotes(int n) {
        N = n;
    }

    void findNotes() {
        int amount = N;
        for (int note : notes) {
            while (amount >= note) {
                amount -= note;
                usedNotes.push_back(note);
            }
        }
    }

    void printNotes() {
        sort(usedNotes.begin(), usedNotes.end());
        for (size_t i = 0; i < usedNotes.size(); i++) {
            cout << usedNotes[i];
            if (i != usedNotes.size() - 1) cout << " ";
        }
        cout << "\n";
    }
};

int main() {
    int N;
    cin >> N;

    CashNotes cn(N);
    cn.findNotes();
    cn.printNotes();

    return 0;
}

