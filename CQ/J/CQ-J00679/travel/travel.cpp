//done
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define u unsigned
signed main()
{
    ifstream cin("travel.in");
    ofstream cout("travel.out");

    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2)
    {
        cout << '1';
        if ((s1[0] == s2[0]) && (s1[1] == s2[1]))
        {
            cout << '1';
            if (s1[2] < 'D')
            {
                if (s2[2] < 'D')
                {
                    cout << '1' << (abs(s2[2] - s1[2]) == 1) << '\n';
                }
                else
                    cout << "00\n";
            }
            else
            {
                if (s2[2] < 'D')
                {
                    cout << "00\n";
                }
                else
                    cout << '1' << (abs(s2[2] - s1[2]) == 2) << '\n';
            }
        }
        else
            cout << "000\n";
    }
    else
        cout << "0000\n";

    return 0;
}