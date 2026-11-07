#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,m,all,maxa,ans,vis[200005];
int a[200005];

void dfs(int now,int have,int num){
    if(have==m){
        ans=max(ans,num);
        return ;
    }
    if(num<=ans&&have!=0){
        return ;
    }
    for(int i=now+1;i<=n;i++){
        if(have+n-i+1<m){
            break;
        }
        if(have==0){
            dfs(i,1,a[i]);
        }
        else{
            dfs(i,have+1,a[i]&num);
        }
    }
    return ;
}

signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        if(i==1){
            all=a[i];
        }
        else{
            all=all&a[i];
        }
        maxa=max(maxa,a[i]);
    }    
    if(n==m){
        cout<<all<<endl;
        return 0;
    }
    if(m==1){
        cout<<maxa<<endl;
        return 0;
    }
    if(n<=2000){
        dfs(0,0,0);
        cout<<ans<<endl;
        return 0;
    }
    for(int i=30;i>=0;i--){
        int bas=(1<<i),have=0;
        for(int j=1;j<=n;j++){
            if(vis[j]==1){
                continue;
            }
            int k=a[j]>>i;
            if(k%2==1){
                have++;
            }
        }
        if(have>=m){
            ans+=bas;
            for(int j=1;j<=n;j++){
                int k=a[j]>>i;
                if(k%2==0){
                    vis[j]=1;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}