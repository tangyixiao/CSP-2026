#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int MAXN=5e5,MAXM=3e5;
int n,m,a[MAXN+11],pos[MAXM+11],t[MAXM+11],depth[MAXM+11],res[MAXM+11];
void main_init(){
    memset(pos,-1,sizeof pos);
    return;
}
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=n;i>=1;i--){
        if(!~pos[a[i]])
            pos[a[i]]=i,depth[a[i]]=depth[a[i+1]]+1;
        t[a[i]]++;
    }
    vector<int>p(m);
    iota(p.begin(),p.end(),1);
    sort(p.begin(),p.end(),[&](const int&lhs,const int&rhs)->bool{return depth[lhs]>depth[rhs];});
    for(int i:p)
        res[i]+=t[i],t[a[pos[a[pos[i]+1]]]]+=t[i];
    for(int i=1;i<=m;i++)
        cout<<res[i]<<" ";
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    main_init();
    int T=1;
    // cin>>T;
    while(T--)
        solve();
    return 0;
}