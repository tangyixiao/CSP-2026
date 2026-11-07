#include <bits/stdc++.h>

std::string c1, s1, c2, s2;

int Side(std::string s);

int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    std::cin >> c1 >> s1 >> c2 >> s2;

    if (c1 == c2)
    {
        std::cout << "1";
        if (s1.substr(0, 2) == s2.substr(0, 2))
        {
            std::cout << "1";
            if (Side(s1) == Side(s2))
            {
                std::cout << "1";
                if (std::abs(s1[2] - s2[2]) == 1)
                    std::cout << "1";
                else
                    std::cout << "0";
            }
            else
                std::cout << "00";
        }
        else
            std::cout << "000";
    }
    else
        std::cout << "0000";


    return 0;
}

int Side(std::string s)
{
    if (s[2] == 'A' || s[2] == 'B' || s[2] == 'C')
        return 1;
    else
        return 2;
}
