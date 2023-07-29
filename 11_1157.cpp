/*
#include <iostream>
#include <string>

int alpha[26], cnt = 0;
std::string a;

int main() {
    std::cin >> a;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] < 97) {
            alpha[a[i] - 65]++;
        }
        else {
            alpha[a[i] - 97]++;
        }
    }

    int max = 0, max_indx = 0;

    for (int i = 0; i < 26; i++) {
        if (max < alpha[i]) {
            max = alpha[i];
            max_indx = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (max == alpha[i]) {
            cnt++;
        }
    }

    if (cnt > 1) {
        std::cout << "?";
    }
    else {
        std::cout << (char)(max_indx + 65);
    }

    return 0;
}
*/