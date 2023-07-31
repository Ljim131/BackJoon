/*
#include <iostream>
#include <string>
#include <cstring>

int main() {
    int num;
    std::cin >> num;
    std::string* str;
    str = new std::string[num];
    int idx[26] = { 0, };
    bool status = true;
    int cnt = 0;
    for (int i = 0; i < num; i++)
    {
        std::cin >> str[i];
    }
    for (int i = 0; i < num; i++)
    {
        status = true;

        memset(idx, 0, sizeof(idx));

        for (int j = 0; j < str[i].length(); j++)
        {
            if (idx[str[i][j] - 'a'] != 0)
                if (str[i][j - 1] != str[i][j])
                {
                    status = false;
                    break;
                }
            idx[str[i][j] - 'a']++;
        }
        if (status)
            cnt++;
    }
    std::cout << cnt;
}
*/