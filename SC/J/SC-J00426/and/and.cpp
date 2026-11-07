#include<bits/stdc++.h>
using namespace std;
#define db(x...) fprintf(stderr,x)
const int N=2e5+5,L=30;
int a[N],n,m;
int qry(int s){
    int cnt=0;
    for(int i=1;i<=n;++i)
        if((a[i]&s)==s) ++cnt;
    return cnt;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;++i) cin>>a[i];
    int ans=0;
    for(int i=L-1;i>=0;--i)
        if(qry(ans|(1<<i))>=m) ans|=1<<i;
    printf("%d\n",ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}