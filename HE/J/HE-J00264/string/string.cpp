#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N],c=0;;
string s,z,zz;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>s;
        for(int j=1;j<=a[i];j++){
            z+=s;
            zz+=s;
        }
    }
    reverse(z.begin(),z.end());
    for(int i=1;i<=n;i++){
        if(z[i]!=zz[i]){
            c++;
        }
    }
    cout<<c;

}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
