#include<iostream>
using namespace std;
const int N=5e5+9;
int n,m,ans[N],a[N],nxt[N],lst[N],mans[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(lst[a[i]])
            nxt[lst[a[i]]]=i;
        lst[a[i]]=i;
        ans[i]=1;
    }
    for(int i=1;i<=n;i++){
        if(!nxt[i])nxt[i]=i+1,mans[a[i]]=ans[i];
        ans[nxt[i]]+=ans[i];
    }
    for(int i=1;i<=m;i++)
        cout<<mans[i]<<' ';
    return 0;
}