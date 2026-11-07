#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=200009;
int n,a[N];
long long m,suf[N],ans;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>c[i],m+=a[i];
    for(int i=n;i>=1;i--)suf[i]=suf[i+1]+a[i];
    int bck=n+1,lft=0;
    long long p=0;
    for(int i=1;;i++){
        long long pre=p;
        p+=a[i];
        p=min(p,m/2);
        if(lft){
            int plft=lft;
            lft=max(0ll,lft-(p-pre));
            ans+=(plft-lft)*(c[bck]!=c[i]);
            pre+=(plft-lft);
            if(p>=suf[bck])bck--;
        }
        while(suf[bck]<=p)ans+=a[bck]*(c[bck]!=c[i]),pre=suf[bck],bck--;
        ans+=(p-pre)*(c[bck]!=c[i]);
        lft=suf[bck]-p;
        if(p==m/2)break;
    }
    cout<<ans;
}