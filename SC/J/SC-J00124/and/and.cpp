#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m,ans;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=30;i>=0;i--){
        ans|=(1<<i);
        int s=0;
        for(int j=1;j<=n;j++){
            if((ans&a[j])==ans) s++;
        }
        if(s<m){
            ans^=(1<<i);
        }
    }
    cout<<ans;
    return 0;
}