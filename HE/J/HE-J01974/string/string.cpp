#include<iostream>
#include<string>
#include<cmath>
using namespace std;
using ll=long long;
ll ans;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a;char c;
        cin>>a>>c;
        for(ll i=1;i<=a;i++){
            s+=c;
        }
    }

    ll L=s.size();
    for(ll i=0;i<L/2;i++){
        ll pairi=L-i-1;
        if(s[i]!=s[pairi]){
            ans++;
        }
    }
    cout<<ans<<"\n";

    fclose(stdin);
    fclose(stdout);
    return 0;
}
