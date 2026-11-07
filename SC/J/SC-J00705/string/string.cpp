#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int n;
ll a[N];
char c[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i)cin>>a[i]>>c[i];
    int p=1,q=n;
    ll nump=a[1],numq=a[n],ans=0;
    while(p<q){
        if(c[p]!=c[q])ans+=min(nump,numq);
        if(nump<numq){
            numq-=nump,nump=a[++p];
        }else if(nump>numq){
            nump-=numq,numq=a[--q];
        }else nump=a[++p],numq=a[--q];
    }
    cout<<ans<<"\n";
    return 0;
}