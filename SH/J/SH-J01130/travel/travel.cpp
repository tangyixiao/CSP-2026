#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    int c1, c2;
    string s1, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    string l1 = s1.substr(0, 2);
    string l2 = s2.substr(0, 2);
    char r1 = s1[2];
    char r2 = s2[2];
    if (c1 == c2)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << "0 0 0 0" << '\n';
        return 0;
    }
    if (l1 == l2)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << "0 0 0" << '\n';
        return 0;
    }
    if ((r1 - 'A' + 1 <= 3 && r2 - 'A' + 1 <= 3) || (r1 - 'A' + 1 > 3 && r2 - 'A' + 1 > 3))
    {
        cout << 1 << " ";
    }
    else
    {
        cout << "0 0" << '\n';
        return 0;
    }
    if (abs(r1 - r2) == 1)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << 0 << '\n';
    }
    return 0;
}
