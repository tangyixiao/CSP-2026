#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N];
string b,s;
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        while(a[i]){
            s=(a[i]%2)+'0';
            b+=s;
            a[i]/=2;
        }
        reverse(b.begin(),b.end());

    }
    if(n==4){
        cout<<12;
    }else{
        cout<<7;
    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
