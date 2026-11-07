#include<bits/stdc++.h>
using namespace std;
const int N=200009;
int n,m,a[N],dig[31],ok,ans;
bitset<N>with[31],res;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        for(int j=29;j>=0;j--)
            if(a[i]&(1<<j))with[j].set(i);
    }
    for(int j=29;j>=0;j--)
        if((!ok&&(int)with[j].count()>=m)||(ok&&(int)(res&with[j]).count()>=m)){
            if(ok)res&=with[j];
            else res=with[j],ok=1;
            ans|=(1<<j);
        }
    cout<<ans;
}