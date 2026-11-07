#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<=n-m+1;++i)
    {
        ans=a[i];
        for(int j=i;j<m;++j)ans&=a[j];
        if(ans)break;
    }
    
    cout<<ans<<endl;
    return 0;
}