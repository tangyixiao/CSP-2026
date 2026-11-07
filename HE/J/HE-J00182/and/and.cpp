#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int a,int b){
    return a>b;
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,cmp);
    cout<<a[m];
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
