#include <bits/stdc++.h>
using namespace std;

int n;
char c;
string s = "";
long long a, len, cnt = 0;

int main()
{
    freopen ("string.in", "r", stdin);
    freopen ("string.out", "w", stdout);

    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a >> c;
        for (int j=1; j<=a; j++)  s += c;
    }
    len = s.size();
    for (int i=0; i<=len/2; i++)
    {
        if (s[i] != s[len-i-1])  cnt++;
    }
    cout << cnt;

    return 0;
}
