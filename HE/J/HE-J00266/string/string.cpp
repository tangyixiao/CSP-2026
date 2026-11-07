#include   <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,qk;
struct code{
    long long l,r;
    char c;
}a[N];
long long op(long long l2,long long r2){
    for(int i=qk;i>=1;i-=1){
        if(a[i].l<=l2){
            qk=i;
            return i;
        }
    }
}
void solve(){
    cin>>n;
    qk=n;
    long long cnt=1;
    for(int i=1;i<=n;i+=1){
        int o;
        char p;
        cin>>o>>p;
        a[i].l=cnt;
        cnt+=o;
        a[i].r=cnt-1;
        a[i].c=p;
    }
    cnt-=1;
    long long mid=cnt/2+1,same=0;
    for(int i=1;i<=n;i+=1){
        if(a[i].l>=mid)break;
        long long r2=cnt-a[i].l+1;
        long long l2=cnt-a[i].r+1;
        if(a[i].r>=mid)l2=mid;
        if(r2<l2)swap(r2,l2);
        int t=op(l2,r2);
        while(a[t].l<=r2&&t<=n){
            if(a[t].c!=a[i].c){t+=1;continue;}
            if(a[t].l<l2){same+=(a[t].r-l2+1);}
            else if(a[t].r>r2){same+=(r2-a[t].l+1);}
            else{same+=(a[t].r-a[t].l+1);}
            t+=1;
        }
    }
    long long mimid=cnt/2;
    cout<<mimid-same;
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
return 0 ;
}
