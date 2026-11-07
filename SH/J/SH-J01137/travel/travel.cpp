#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int c1, c2;
    string s1, s2;
    bool b1 = 0, b2 = 0, b3 = 0, b4 = 0;

    cin >> c1 >> s1 >> c2 >> s2;

    if (c1 == c2)
    {
        b1 = 1;
        if (s1[0] == s2[0] && s1[1] == s2[1])
        {
            b2 = 1;
            if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D'))
            {
                b3 = 1;
                if (abs(s1[2] - s2[2]) == 1 || (s1[2] >= 'D' && s2[2] >= 'D')) b4 = 1;
            }
        }
    }

    cout << b1 << b2 << b3 << b4;

    return 0;
}