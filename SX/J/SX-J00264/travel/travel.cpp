#include<bits/stdc++.h>
#define int long long
signed main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    std::string c1, s1, c2, s2;
    std::cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2)
    {
        std::cout << 1;
        if (s1[0] == s2[0] && s1[1] == s2[1])
        {
            std::cout << 1;
            if ((s1[2] < 'D' && s2[2] < 'D') || (s1[2] > 'C' && s2[2] > 'C'))
            {
                std::cout << 1;
                if (std::abs(s1[2] - s2[2]) == 1)
                {
                    std::cout << 1;
                }
                else std::cout << 0;
            }
            else std::cout << "00";
        }
        else std::cout << "000";
    }
    else std::cout << "0000";
    return 0;
}