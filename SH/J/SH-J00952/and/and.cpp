#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,a[100005];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    long long ans=262144*2-1;
    for(int i=n;i>n-m;i--)
    {
        ans=(ans&a[i]);
    }
    cout<<ans;
}
