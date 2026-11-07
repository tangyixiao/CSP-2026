#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=100100;
ll n,c,res;
ll a[MAXN*2];
bool cmp(ll x,ll y)
{
    return x>y;
}
void solve()
{
    cin>>n>>c;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    res=a[1];
    for(ll i=2; i<=c; i++)
    {
        res&=a[i];
    }
    cout<<res;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    solve();
    return 0;
}