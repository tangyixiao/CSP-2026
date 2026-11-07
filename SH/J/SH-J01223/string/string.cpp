#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;
const int N=2e5+5;
ull n,a[N],sum,mid,ans;
char c[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(ull i=1;i<=n;i++){
        cin >> a[i] >> c[i];
        sum+=a[i];
    }
    ull l=1,r=n;
    while(l<r){
        ull x=min(a[l],a[r]);
        if(c[l]==c[r]){
            a[l]-=x;a[r]-=x;
            if(a[l]==0) l++;
            if(a[r]==0) r--;
        }else{
            a[l]-=x;a[r]-=x;
            ans+=x;
            if(a[l]==0) l++;
            if(a[r]==0) r--;
        }
        // cerr << l << ' ' << r << endl;
    }
    cout << ans << endl;
    return 0;
}
//十年OI一场空，不开__见祖宗