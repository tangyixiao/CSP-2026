#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    
    int n,m;
    int a[10010];
    int ans =0;
    cin >> ans;
    for(int i = 0;i <= n;i++)
{
        for(int j = 1; j<= m;j++)
{
       ans == max(i&j,n&m);
}
}

    cout << ans;
    return 0;
}