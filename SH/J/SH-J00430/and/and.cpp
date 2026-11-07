#include<bits/stdc++.h>
using namespace std;
int a[200005],ans,n,m;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n,greater<int>());
    if(m==1){
        ans=a[1];
    }
    else if(m==n){
        ans=-1;
        for(int i=1;i<=n;i++) ans&=a[i];
    }
    else if(m==n-1){
        for(int i=1;i<=n;i++){
            int cnt=-1;
            for(int j=1;j<=n;j++){
                if(j==i) continue;
                else cnt&=a[j];
            }
            ans=max(cnt,ans);
        }
    }
    else{
        ans=a[m];
    }
    cout<<ans;
    return 0;
}
