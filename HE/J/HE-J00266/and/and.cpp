#include   <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
void solve(){
    int n,m,ans;
    cin>>n>>m;
    for(int i=1;i<=n;i+=1){
        cin>>a[i];
    }
    sort(a+1,a+n+1,greater<int>());
    ans=a[1];
    for(int i=2;i<=m;i+=1){
        ans&=a[i];
    }
    cout<<ans;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
return 0 ;
}
