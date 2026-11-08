#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    cin.tie(nullptr);
    cin.sync_with_stdio(false);
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 != c2)
        cout << "0000";
    else
    {
        if (s1.substr(0, 2) != s2.substr(0, 2))
            cout << "1000";
        else
        {
            int x = s1[2] - 'A', y = s2[2] - 'A';
            if (x <= 2 && y > 2 || x <= 2 && y > 2)
                cout << "1100";
            else
            {
                if (x < y)
                    swap(x, y);
                if (x - y != 1)
                    cout << "1110";
                else
                    cout << "1111";
            }
        }
    }
    return 0;
}
//