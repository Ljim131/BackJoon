/*
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> c = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
    int idx;
    std::string str;
    std::cin >> str;

    for (int i = 0; i < c.size(); i++)
    {
        while (1) {
            idx = str.find(c[i]);
            if (idx == std::string::npos)
                break;
            str.replace(idx, c[i].length(), "#");
        }
    }

    std::cout << str.length();
    return 0;
}
*/