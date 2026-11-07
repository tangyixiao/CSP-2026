#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,ans;vector<pair<ll,char>>a;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;a.resize(n);
    for(auto&[i,c]:a)cin>>i>>c;
    for(int i=0,j=a.size()-1;i<j;){
        ll ln=min(a[i].first,a[j].first);
        ans+=ln*(a[i].second!=a[j].second);
        if(!(a[i].first-=ln))i++;
        if(!(a[j].first-=ln))j--;
    }cout<<ans<<"\n";
    cout.flush();
    return 0;
}