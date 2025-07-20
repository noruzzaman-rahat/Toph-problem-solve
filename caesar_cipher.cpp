#include <iostream>
#include <string>
using namespace std;

class CaesarCipher {
private:
    int shift;
    string message;

public:
    CaesarCipher(int s, string m) {
        shift = s;
        message = m;
    }

    void encrypt() {
        for (int i = 0; i < message.length(); i++) {
            char ch = message[i];
            if (ch >= 'a' && ch <= 'z') {
                char shifted = ch - shift;
                if (shifted < 'a') {
                    shifted += 26;
                }
                cout << shifted;
            }
            else {

                cout << ch;
            }
        }
        cout << endl;
    }
};

int main() {
    int N;
    string msg;
    cin >> N;
    cin.ignore();
    getline(cin, msg);

    CaesarCipher cipher(N, msg);
    cipher.encrypt();

    return 0;
}

