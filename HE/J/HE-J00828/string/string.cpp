#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int maxn=2e5+1;
int n,a[maxn];
char c[maxn];
ll sum[maxn];
string str;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        sum[i]=sum[i-1]+a[i];
        for(int j=1;j<=a[i];j++){
            str+=c[i];
        }
    }
    int len=str.length();
    str=" "+str;
    int ans=0;
    for(int i=1;i<=len/2;i++){
        if(str[i]!=str[len+1-i]){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
/*
WA:
const int maxn=2e5+1;
int n,a[maxn];
char c[maxn];
ll sum[maxn];
int Find(ll x){
    int l=1,r=n;
    while(l<r){
        int mid=(l+r)>>1;
        ll l1=sum[mid-1]+1,r1=sum[mid];
        if(l1<=x&&x<=r1){
            return mid;
        }
        if(x<l1){
            r=mid-1;
        }else if(x>r1){
            l=mid+1;
        }
    }
    return l;
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        sum[i]=sum[i-1]+a[i];
    }
    ll L=sum[n];
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll l=sum[i-1]+1,r=sum[i];
        if(l>L/2){ break; }
        if(r>L/2){
            r=min(r,L/2);
        }
        ll nl=L-l+1,nr=L-r+1;
        ll j1=Find(nl),j2=Find(nr);
        //cout<<"D: l="<<l<<" r="<<r<<" nl="<<nl<<" nr="<<nr<<" j1="<<j1<<" j2="<<j2<<endl;
        if(c[i]!=c[j1]){
            ans+=nl-(sum[j1-1]+1)+1;
        }
        if(c[i]!=c[j2]){
            ans+=sum[j2]-nr+1;
        }
        for(int j=j1+1;j<=j2-1;j++){
            if(c[i]!=c[j]){
                ans+=sum[j]-(sum[j-1]+1)+1;
            }
        }
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
*/
