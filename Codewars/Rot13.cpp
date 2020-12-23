// https://www.codewars.com/kata/530e15517bc88ac656000716

#include <string>
using namespace std;

string rot13(string msg) {
    int shift = 13;
    for (int i = 0; i < msg.size(); i++) {
        if (isalpha(msg[i])) {
            if(isupper(msg[i])) {
                msg[i] = (msg[i] + shift - 65) % 26 + 65;
            } else {
                msg[i] = (msg[i] + shift - 97) % 26 + 97;
            }
        }
    }

    return msg;
}
