#include <bits/stdc++.h>
using namespace std;
string z1,z2;
int n,m,k1,k2,p,q;
void solve(){
    cin>>n>>z1>>m>>z2;
    k1=z1[2]-'A';
    k2=z2[2]-'A';
    p=(z1[0]==z2[0]&&z1[1]==z2[1]?1:0);
    q=(n==m?1:0);
    cout<<(q?1:0)<<(p&&q?1:0)<<((k1+k2<4||k1+k2==7)&&p&&q?1:0)<<(abs(k1-k2)==1&&k1+k2!=5&&p&&q?1:0);
    return;
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    while(t--){
        solve();
    }

    return 0;
}
