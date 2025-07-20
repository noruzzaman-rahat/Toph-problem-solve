#include <iostream>
#include <string>
using namespace std;

class StrongPassword {
private:
    string word;

public:
    StrongPassword(string w) {
        word = w;
    }

    void makeStrong() {
        if (word.length() == 0) {
            cout << "." << endl;
            return;
        }

        word[0] = toupper(word[0]);


        for (int i = 1; i < word.length(); i++) {
            if (word[i] == 's') word[i] = '$';
            else if (word[i] == 'i') word[i] = '!';
            else if (word[i] == 'o') {
                word.replace(i, 1, "()");
                i++;
            }
        }

        word += ".";

        cout << word << endl;
    }
};

int main() {
    string input;
    cin >> input;

    StrongPassword sp(input);
    sp.makeStrong();

    return 0;
}

