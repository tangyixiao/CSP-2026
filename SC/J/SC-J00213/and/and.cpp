#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+10;
int arr[maxn];
int n,m;
int chk(int pos){
    int cnt=0;
    for(int i=1;i<=n;i++) if((pos&arr[i])==pos) cnt++;
    return cnt;
}
signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    int sum=0;
    for(int i=30;i>=0;i--){
        if(chk(sum+(1<<i))>=m) sum+=(1<<i);
    }
    printf("%d\n",sum);
}