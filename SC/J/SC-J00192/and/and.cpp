#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[200005],det[200005];
set<ll>can;
bool check(ll w){
    ll jsq=0;
    for(auto v:can){
        if((a[v]>>(w-1))&1)jsq++;
    }
    return jsq>=m;
}
void del(ll w){
    ll pos=0;
    for(auto v:can){
        if((a[v]>>(w-1))&1)continue;
        det[++pos]=v;
    }
    for(int i=1;i<=pos;i++)can.erase(det[i]);
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)can.insert(i);
    ll now=31;
    while(now){
        if(check(now)){
            del(now);
            ans+=(1<<(now-1));
        }
        now--;
    }
    cout<<ans<<'\n';
    return 0;
}