#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
#define int long long
typedef long long ll;
ll a[N],n,m,ans=LLONG_MAX,cnt1,cnt2,pos[N],len;
char c[N];
ll belong(ll x)
{
    ll p=upper_bound(pos+1,pos+len+1,x)-pos-1;
    return (p+1)/2;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>c[i],m+=a[i];
    for(int i=1,pre=0;i<=n;i++)
    {
        pos[++len]=pre+1;
        len++;
        pos[len]=pos[len-1]+a[i]-1,pre=pos[len];
    }
    for(ll i=1;i<=m/2;i++) cnt1+=c[belong(i)]!=c[belong(m-i+1)];
    for(ll i=m;i>=m/2;i--) cnt2+=c[belong(i)]!=c[belong(m-i+1)];
    cout<<min(cnt1,cnt2);

    return 0;
}
