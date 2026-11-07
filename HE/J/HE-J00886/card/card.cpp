#include <bits/stdc++.h>
using namespace std;
long long n, m, a[300005], x, s[300005];
int main()
{
    freopen("card.in","r",stdout);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for (int i =1;i<= n;i++)
    {
        memset(a, 0, sizeof(a));
        for (int j =1;j<= m;j++)
        {
            cin >> x;
            if(a[x] != 0)
            {
                memset(a, 0, sizeof(a));
                a[x]++;
                continue;
            }
            a[x]++;
        }
        for (int j =1;j<= m;j++)
            if(a[j] != 0)
                s[j]++;
    }
    for (int i =1;i<= m;i++)
        cout << s[i] << " ";
    return 0;
}
