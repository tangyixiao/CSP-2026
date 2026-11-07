#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

//main
long long f[N];
int n,m;
//

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1;i<=n;i++) cin >> f[i];
    long long an = 0;
    for(int i = 30;i>=0;i--)
    {
        int s = 0;
        an |= (1ll << i);
        for(int j = 1;j<=n;j++) s += (((f[j] >> i << i)&an) == an);
        if(s < m)   an ^= (1ll << i);
    }
    cout << an;
    return 0;
}