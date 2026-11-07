#include<bits/stdc++.h>
const int N=2e5+11;
using namespace std;
int n,m;
int a[N];
bitset<N> b[31];
bitset<N> b2;
int ans;
void dfs(int k){
    if((b[k]&b2).count()>=m){
        ans+=(1<<k-1);
        b2&=b[k];
        if(k>1)dfs(k-1);
    }else{
        if(k>1)dfs(k-1);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i <= n;i++){
        cin>>a[i];
        b2.set(i);
        for(int j=1;j <= 30;j++){
            if((a[i]>>j-1)&1) b[j].set(i);
        }
    }
    dfs(30);
    cout<<ans;
    return 0;
}