#include <bits/stdc++.h>
using namespace std;
int const N=2e5+9;
int n,s[N];
string h;
char c[N];
long long l,r,mid,si;
bool check(long long x){
    long long ans=0;
    for(long long i=0;i<si/2;i++){
        if(h[i]!=h[si-i-1])ans++;
		if(ans>x)return 0;
    }
    return 1;
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i]>>c[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s[i];j++){
            h+=c[i];
        }
    }
    l=0;
    r=h.size()-1;
    si=h.size();
    while(l<r){
        mid=(l+r)/2;
        if(check(mid)){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<l<<endl;
    return 0;
}