#include<bits/stdc++.h>
#define ll long long
using namespace std;
char c[200005];
ll a[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll n,L=0,l,r,jsq=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        L+=a[i];
    }
    if(L%2){
        L=(L+1)/2;
        for(int i=1;i<=n;i++){
            L-=a[i];
            if(L<=0){a[i]--;break;}
        } 
    }
    l=1,r=n;
    while(l<r){
        ll s=min(a[l],a[r]);
        if(c[l]!=c[r])jsq+=s;
        a[l]-=s;
        a[r]-=s;
        if(a[l]==0)l++;
        if(a[r]==0)r--;
    }
    cout<<jsq<<'\n';
    return 0;
}