#include <bits/stdc++.h>
using namespace std;

int x[200005];
char c[200005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("string5.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; ++i)
    {
        int x;
        char c;
        cin >> x >> c;
        while (x--)
        {
            s = s + c;
        }
    }
    long long cnt = 0;
    for (int i = 0; i < s.size() / 2; ++i)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            cnt++;
            s[i] = s[s.size() - i - 1];
        }
    }
    cout << cnt << '\n';
    /*for (int i = 1; i <= n; ++i)
    {
        int x;
        char c;
        cin >> x[i] >> c[i];
    }
    int cur = n;
    int cnt = 0;
    for (int i = 1; i != cur; )
    {
        if (c[i] != c[cur])
        {
            cnt += min(x[i], x[cur]);
            if (x[i] >x[cur])
            {
                x[i] -= x[cur];
                cur--;
            }
            else if (x[i] <x[cur])
            {
                x[cur] -= x[i];
                i++;
            }
            else
            {
                i++;
                cur--;
            }
        }
    }
    cout <<cnt <<'\n';*/
    return 0;
}
