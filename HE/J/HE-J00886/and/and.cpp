#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], s[200005];
int main()
{
    freopen("and.in","w",stdout);
    freopen("and.out","w",stdout);
    cout << n << m;
    s[0] = 0;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
        s[i] = max(s[i - 1], s[i - 1] & a[i]);
    }
    cout << s[n];
    return 0;
}
