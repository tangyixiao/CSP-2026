//done*
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define u unsigned
signed main()
{
    ifstream cin("string.in");
    ofstream cout("string.out");
    u int n;
    cin >> n;
    vector<u int> l(n + 1, 0);
    vector<char> c(n + 1);
    for (u int i = 1; i <= n; i++)
    {
        cin >> l[i];
        l[i] += l[i - 1];
        cin >> c[i];
    }
    u int fblock = 1, rblock = n;
    u int r = 0;
    for (u int i = 1; fblock < rblock;)
    {
        while (l[fblock] < i)
            fblock++;
        while (l[rblock - 1] > l[n] - i + 1)
            rblock--;
        u int k = min(l[fblock] - l[fblock - 1], l[rblock] - l[rblock - 1] + 1);
        if (c[fblock] != c[rblock])
            r += k;
        i += k;
    }
    cout << r << '\n';

    return 0;
}