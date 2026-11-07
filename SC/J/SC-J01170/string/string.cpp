#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,x,cnt,ans,sum,a[10000005];
ll s[10000005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>x;
        for(int j=1;j<=x;j++){
            cin>>s[j];
            a[i]=s[i];
            sum++;
            cout<<s[i];
        }
    }
    for(ll i=sum;i>=1;i--)
    {
        if(s[i]!=s[n-1])
        {
            s[sum-i]=s[i];
            cnt++;
        }
    }
    for(int i=sum;i>=1;i--)
    {
        if(a[i]!=a[sum-i])
        {
            a[i]=a[sum-i];
            ans++;
        }
    }
    cout<<min(ans,cnt);
    return 0;
}
