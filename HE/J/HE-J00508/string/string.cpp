#include <bits/stdc++.h>
using namespace std;

int n,a[210000],s[210000];
char ac[210000];

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i] >> ac[i];
    }
    long long ams = 0;
    if(n == 1)
    {
        cout << 0;
        return 0;
    }
    int l = 1,r = n;
    while(l < r)
    {
        int x = min(a[l],a[r]);
        if(ac[l] == ac[r])
        {
            a[l] -= x;
            a[r] -= x;
            if(a[l] == 0)
            {
                l++;
            }
            if(a[r] == 0)
            {
                r--;
            }
        }
        else
        {
            ams += x;
            a[l] -= x;
            a[r] -= x;
            if(a[l] == 0)
            {
                l++;
            }
            if(a[r] == 0)
            {
                r--;
            }
        }
    }
    cout << ams;
}
