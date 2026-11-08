#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,ans,a[200001],r,noingor;
bool cmp(int a,int b){
    if((a&noingor)!=(b&noingor)) return (a&noingor)>(b&noingor);
    else return a>b;
}
signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    stable_sort(a+1,a+n+1);
    reverse(a+1,a+n+1);
    r=n;
    for(int v=31;v>=0;v--){
        noingor|=(1ll<<v);
        stable_sort(a+1,a+r+1,cmp);
        if((a[k]&noingor)<noingor){
            noingor^=(1ll<<v);
        }
    }
    cout<<noingor;
}