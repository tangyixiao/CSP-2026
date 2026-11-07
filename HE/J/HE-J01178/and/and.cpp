#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,x,y;
    int a[200005];
    cin >> n >> m;
    int cnt=0;
    for(int i=0;i<=n-1;i++)
    {
        cin >> x;
        a[i]=x;
    }
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]>cnt)
            cnt=a[i];
    }
    cout << cnt;
    return 0;
}
