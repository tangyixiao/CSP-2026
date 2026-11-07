#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1 == "01" || c1 == "16" || c2 == "01" || c2 == "16") return 0;
    int res1, res2, res3, res4;
    if(c1[0] == c2[0] && c1[1] == c2[1] && c1.size() == c2.size())
    {
        res1 = 1;
    }
    else res1 = 0;
    if(res1 == 0)
    {
        cout << "0000" << endl;
        return 0;
    }

    if(s1[0] == s2[0] && s1[1] == s2[1])
    {
        res2 = 1;
    }
    else res2 = 0;
    if(res2 == 0)
    {
        cout << "1000" << endl;
        return 0;
    }

    if(((s1[2] >= 'A' && s1[2] <= 'C') && (s2[2] >= 'A' && s2[2] <= 'C')) || ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')))
    {
        res3 = 1;
    }
    else res3 = 0;
    if(res3 == 0)
    {
        cout << "1100" << endl;
        return 0;
    }

    if(((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'A')) || ((s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'B')) || ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')))
    {
        res4 = 1;
    }
    else res4 = 0;

    cout << res1 << res2 << res3 << res4 << endl;
    return 0;
}
