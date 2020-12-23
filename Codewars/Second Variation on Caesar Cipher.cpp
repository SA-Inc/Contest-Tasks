// https://www.codewars.com/kata/55084d3898b323f0aa000546

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

char encrypt(char letter, int shift) {
    if(isupper(letter)) {
        letter = (letter + shift - 65) % 26 + 65;
    } else {
        letter = (letter + shift - 97) % 26 + 97;
    }

    return letter;
}

char decrypt(char letter, int shift) {
    if(isupper(letter)) {
        letter = (letter - 65 - shift + 26) % 26 + 65;
    } else {
        letter = (letter - 97 - shift + 26) % 26 + 97;
    }

    return letter;
}





class CaesarTwo
{
public:
    static std::string decode(std::vector<std::string> &s) {
    std::string enc;
    if (s.size() != 5) {
        enc = s[0] + s[1] + s[2] + s[3];
    } else {
        enc = s[0] + s[1] + s[2] + s[3] + s[4];
    }
    std::string dec = "";
    char firstLetter = enc[0];
    char secondLetter = enc[1];
    int shift = abs((int)firstLetter - (int)secondLetter);
    enc = enc.substr(2, enc.size());

    for (int i = 0; i < enc.size(); i++) {
        if (isalpha(enc[i])) {
            dec += decrypt(enc[i], shift);
        } else {
            dec += enc[i];
        }
    }

    return dec;
}
  
    static std::vector<std::string> encodeStr(const std::string &s, int shift) {
    std::vector<std::string> encryptionVector;
    std::string enc = "";
    std::string firstLetter;
    std::string secondLetter;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            enc += encrypt(s[i], shift);
        } else {
            enc += s[i];
        }
    }

    firstLetter = tolower(s[0]);
    secondLetter = tolower(enc[0]);

    enc = firstLetter + secondLetter + enc;

    int cut = int(std::ceil(enc.size() / 5.0));

    for (int i = 0; i < 5 * cut; i += cut) {
        encryptionVector.push_back(enc.substr(i, cut));
    }

    if (encryptionVector[4].empty()) {
        encryptionVector.pop_back();
    }

    return encryptionVector;
  }
};
