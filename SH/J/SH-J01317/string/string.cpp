#include <bits/stdc++.h>
using namespace std;

struct A
{
    long long a;
    char c;
}a[200005];

int main()
{
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    long long n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].a >> a[i].c;
        sum += a[i].a;
    }
    long long i = 1, ans = 0;
    long long l = 1, r = n, l1 = 1, r1 = sum;
    sum /= 2;
    sum += 1;
    while(l1 < sum)
    {
        if(a[l].c == a[r].c)
        {
            if(a[l].a == a[r].a)
            {
                long long t = min(sum - l1, a[l].a);
                l1 += t;
                r1 -= t;
                l++;
                r--;
            }
            else if(a[l].a < a[r].a)
            {
                long long t = min(sum - l1, a[l].a);
                l1 += t;
                r1 -= t;
                l++;
                a[r].a -= t;
            }
            else if(a[l].a > a[r].a)
            {
                long long t = min(sum - l1, a[r].a);
                l1 += t;
                r1 -= t;
                a[l].a -= t;
                r--;
            }
        }
        else
        {
            if(a[l].a == a[r].a)
            {
                long long t = min(sum - l1, a[l].a);
                l1 += t;
                r1 -= t;
                l++;
                r--;
                ans += t;
            }
            else if(a[l].a < a[r].a)
            {
                long long t = min(sum - l1, a[l].a);
                l1 += t;
                r1 -= t;
                l++;
                a[r].a -= t;
                ans += t;
            }
            else if(a[l].a > a[r].a)
            {
                long long t = min(sum - l1, a[r].a);
                l1 += t;
                r1 -= t;
                a[l].a -= t;
                r--;
                ans += t;
            }
        }
    }
    cout << ans;
    return 0;
}
