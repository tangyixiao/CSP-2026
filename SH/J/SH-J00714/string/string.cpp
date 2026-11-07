#include <bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];
int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k;
        char c;
        cin >> k >> c;
        a[i] = k;
        b[i] = c;
    }
    int r = n;
    long long sum = 0;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        while (a[i] != 0 )
        {
            int k = min(a[i], a[r]);
            a[i] -= k;
            a[r] -= k;
            if (b[r] != b[i])
                sum += k;
            if (a[r] == 0)
                r--;
            if (r <= i)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    cout << sum;
    return 0;
}
