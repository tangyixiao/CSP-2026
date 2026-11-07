#include<bits/stdc++.h>
using namespace std;
#define db(x...) fprintf(stderr,x)
using ll=unsigned long long;
const int N=2e5+5;
int n;
struct node{
    char x;
    ll y;
}a[N],b[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;++i) cin>>a[i].y>>a[i].x,b[i]=a[i];
    reverse(b+1,b+1+n);
    int x=1,y=1;
    ll ans=0;
    while(x<=n&&y<=n){
        // db("%d %d:(%c,%lld)(%c,%lld)\n",x,y,a[x].x,a[x].y,b[x].x,b[x].y);
        if(a[x].y<=b[y].y){
            ans+=(a[x].x!=b[y].x)*a[x].y;
            b[y].y-=a[x].y;
            ++x;
        }else{
            ans+=(a[x].x!=b[y].x)*b[y].y;
            a[x].y-=b[y].y;
            ++y;
        }
    }
    printf("%lld\n",ans>>1);
    fclose(stdin);
    fclose(stdout);
    return 0;
}