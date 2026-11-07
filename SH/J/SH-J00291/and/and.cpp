#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n,0);
    ll ans=LLONG_MIN;
    for(int i=0;i<n;i++) cin>>a[i];
    if(m==1){
        sort(a.begin(),a.end());
        cout<<a[n-1];
        return 0;
    }
    int mi,mj;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll cnt=a[i]&a[j];
            if(cnt>ans){
                ans=cnt;
                mi=i,mj=j;
            }
        }
    }
    a.erase(a.begin()+mi);
    if(mi<mj) mj--;
    a.erase(a.begin()+mj);
    for(int k=3;k<=m;k++){
        n=a.size();
        ll temp=ans;
        ans=temp&a[0];
        mi=0;
        for(int i=1;i<n;i++){
            ll cnt=a[i]&temp;
            if(cnt>ans){
                ans=cnt;
                mi=i;
            }
        }
        a.erase(a.begin()+mi);
    }
    cout<<ans;
    return 0;
}
