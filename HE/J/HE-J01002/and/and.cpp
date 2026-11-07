#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 200005
ll n,m,ans,a[maxn];
ll Max,b,l;
struct dec{
    ll val=0,sum=0;
}T[1100000];
void Insert (ll x){
    ll cur=0;
    for (int k=0;k<=31;k++){
        if (((1<<k)&x)){
            cur+=(1<<k);
            T[cur].sum++;
        }
    }
}
void build(){
    for (int i=0;i<1100000;i++){
        T[i].val=i;
    }
}
int vis[22];
void bfs(ll k,ll x){
    if (k==m) {
        l=max(l,x);
        return;
    }
    for (int i=1;i<=n;i++){
        if (vis[i]) continue;
        vis[i]=1;
        ll y=(x&a[i]);
        if (x==-1) y=a[i];
        bfs(k+1,y);
        vis[i]=0;
    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    build();
    for (int i=1;i<=n;i++){
        cin>>a[i];
        if (i==1) b=a[i];
        Max=max(Max,a[i]);
        b&=a[i];
        Insert(a[i]);
    }
    if (m==1) cout<<Max;
    else if (m==n) cout<<b;
    else if (m==2){
        for (int i=1;i<=n;i++){
            for (int j=i+1;j<=n;j++){
                l=max(l,(a[i]&a[j]));
            }
        }
        cout<<l;
    }else if (n<=20){
        bfs(0,-1);
        cout<<l;
    }else {
        for (int i=1100000-1;i>=0;i--){
            if (T[i].sum>=m) {
                cout<<i;
                break;
            }
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}

