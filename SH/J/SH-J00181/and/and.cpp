#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+9;
ll a[N];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i = 1;i <= n;i++){
        cin>>a[i];
    }
    ll ans=0;
    for(int st = 30;st >= 0;st--){
        int cnt=0;
        for(int i = 1;i <= n;i++){
            if((a[i]&ans)==ans){
                if(a[i]&(1ll<<st))cnt++;
            }
        }
        if(cnt>=m)ans|=(1ll<<st);
    }
    cout<<ans;
    return 0;
}
