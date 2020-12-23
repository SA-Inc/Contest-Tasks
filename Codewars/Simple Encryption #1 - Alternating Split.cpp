// https://www.codewars.com/kata/57814d79a56c88e3e0000786

#include <string>

std::string encrypt(std::string text, int n) {
  if (n == -1) {
    return text;
  }

  std::string firstPart;
  std::string secondPart;

  for (int i = 0; i < n; i++) {
    for (size_t j = 0; j < text.size(); j++) {
      if (j % 2 != 0) {
        firstPart += text[j];
      }
      else {
        secondPart += text[j];
      }
    }
    text = firstPart + secondPart;
    firstPart = "";
    secondPart = "";
  }

  return text;
}

std::string decrypt(std::string encryptedText, int n) {
  if (n == -1) {
    return encryptedText;
  }

  std::string firstPart;
  std::string secondPart;
  std::string plain = "";

  for (int i = 0; i < n; i++) {
    int mid = encryptedText.size() / 2;
    firstPart = encryptedText.substr(0, mid);
    secondPart = encryptedText.substr(mid, encryptedText.size());
    plain = "";

    for (int j = 0; j < mid; j++) {
      plain += secondPart[j];
      plain += firstPart[j];
    }

    if (encryptedText.size() % 2 != 0) {
      plain += secondPart[mid];
    }
    
    encryptedText = plain;
    firstPart = "";
    secondPart = "";
  }

  return encryptedText;
}
