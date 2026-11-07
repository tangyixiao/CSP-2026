#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    string num;
    for(int i=0;i<n;i++){
        ll a;
        char c;
        cin>>a>>c;
        for(int j=0;j<a;j++) num+=c;
    }
    ll ans=0,len=num.size();
    for(int i=0;i<len/2;i++){
        if(num[i]!=num[len-i-1]) ans++;
    }
    cout<<ans;
    return 0;
}
