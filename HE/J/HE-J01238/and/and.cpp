#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m;
ll a[1000000000];
ll xvnzhao(int x){
    if(x==2){
        ll maxn;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                maxn=max(maxn,a[i]&a[j]);
            }
        }
        return maxn;
    }
    ll maxn;
    for(int i=1;i<=n;i++){
        maxn=max(maxn,a[i]&xvnzhao(x-1));
    }
    return maxn;
}
int main(){
    freopen("and1.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<xvnzhao(m);
    return 0;
}
