#include<bits/stdc++.h>
using namespace std;
long long ans[200005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>ans[i];
    }
    if(n==m){
        long long cnt=ans[1];
        for(int i=1;i<n;i++){
            cnt=cnt&ans[i+1];
        }
        cout<<cnt;
        return 0;

    }
    if(m==1){
        sort(ans+1,ans+n+1);
        cout<<ans[n];
        return 0;
    }
    if(m==2){
        long long cnt[400005]={0};
        int t=1;
        int ttt=0;
        for(int i=1;i<n;i++){
            ttt+=n-i+1;
            for(int j=i+1;j<=n;j++){
                cnt[t]=ans[i]&ans[j];
                t++;
            }

        }
        sort(cnt+1,cnt+ttt+1);
        cout<<cnt[ttt];

    }







    return 0;

}

