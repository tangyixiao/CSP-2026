#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,ans;
short a[200005][50];
bool nega[200005];
signed main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        for(int j=1,k=1;j<=x;j<<=1,k++){
            if(j&x) a[i][k]=1;
        }
    }
    for(int i=30;i>=1;i--){
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(!nega[j]) if(a[j][i]) cnt++;
        }
        if(cnt>=m){
            ans|=(1<<(i-1));
            for(int j=1;j<=n;j++){
                nega[j]=nega[j]||!a[j][i];
            }
        }
    }
    cout<<ans;
    return 0;
}
unsigned long long rp=-1;