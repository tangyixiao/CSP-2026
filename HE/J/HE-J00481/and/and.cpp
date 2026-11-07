#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int n,m;
long long mx,ans;
long long a[N],dp[N][N];
void dfs(int now,int cnt,long long val){
    if(cnt==m){
        mx=max(mx,val);
        return;
    }
    if(now>n){
        return;
    }
    dfs(now+1,cnt+1,val&a[now]);
    dfs(now+1,cnt,val);
    return;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n<=20&&m<=n){
        for(int i=1;i<=n;i++){
            dfs(i,0,a[i]);
        }
        cout<<mx<<endl;
    }else if(n<=2000){
        if(m==1){
            for(int i=1;i<=n;i++){
                mx=max(mx,a[i]);
            }
        }else if(m==n){
            mx=a[1];
            for(int i=2;i<=n;i++){
                mx=(mx&a[i]);
            }
            cout<<mx;
        }else if(m==2){
            for(int i=1;i<=n;i++){
                for(int j=i+1;j<=n;j++){
                    mx=max(mx,a[i]&a[j]);
                }
            }
            cout<<mx;
        }
    }else if(m==n-1){

    }else{
        dp[1][1]=a[1];
        for(int i=2;i<=n;i++){
            dp[i][1]=a[i];
            for(int j=1;j<=m;j++){
                dp[i][j]=max(dp[i][j],dp[i-1][j]);
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]&a[i]);
            }
        }
        cout<<dp[n][m];
    }
}
