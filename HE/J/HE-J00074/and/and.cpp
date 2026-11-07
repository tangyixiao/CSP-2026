#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
const int M=1e4+10;
int a[N];
int n,m;
int dp[M][M];
int main (){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    int mx=-1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(m==1){
        for(int i=1;i<=n;i++){
            mx=max(mx,a[i]);
        }
        cout<<mx<<endl;
    } else if(m==2){
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int num=(a[i]&a[j]);
                mx=max(num,mx);
            }
        }
        cout<<mx<<endl;
    }else if(m==n){
        int num=a[1];
        for(int i=2;i<=n;i++){
            num=(num&a[i]);
        }
        cout<<num<<endl;
    } else if(m==n-1){
        for(int i=1;i<=n;i++){
            int num=0;
            for(int j=1;j<=n;j++){
                if(j==i) continue;
                if(num==0){
                    num=(a[j]&a[j+1]);
                    j++;
                }
                num=(num&a[j]);
            }
            mx=max(mx,num);
        }
        cout<<mx<<endl;
    } else{
        for(int i=1;i<=n;i++){
            dp[i][1]=a[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=2;j<=n;j++){
                for(int k=1;k<=n;k++){
                    if(k==j) continue;
                    int num=(dp[k][j-1]&a[j]);
                    dp[i][j]=max(dp[i][j],num);
                }
            }
        }
        for(int i=1;i<=n;i++){
            mx=max(dp[i][m],mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
