#include <bits/stdc++.h>

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    std::string c1,s1,c2,s2;
    std::cin >> c1 >> s1 >> c2 >> s2;
    if(c1 == c2)
    {
        std::cout << 1;
        std::string a1 = "";
        std::string a2 = "";
        if(c1[0] != '0') a1 += s1[0];
        if(c2[0] != '0') a2 += s2[0];
        a1 += s1[1];
        a2 += s2[1];
        char c1 = s1[2], c2 = s2[2];
        if(a1 == a2)
        {
            std::cout << 1;
            bool is_same_side = ((c1 >= 'A' && c1 <= 'C') && (c2 >= 'A' && c2 <= 'C')) || ((c1 == 'D' || c1 == 'F') && (c2 == 'D' || c2 == 'F'));
            std::cout << (int)is_same_side;
            if(is_same_side)
            {
                if(c1 + 1 == c2 || c1 - 1 == c2 || c2 + 1 == c1 || c2 - 1 == c1)
                {
                    std::cout << 1;
                }
                else
                {
                    std::cout << 0;
                }
            }
            else
            {
                std::cout << 0;
            }
        }
        else
        {
            std::cout << "000";
        }
    }
    else
    {
        std::cout << "0000";
    }
    return 0;
}
