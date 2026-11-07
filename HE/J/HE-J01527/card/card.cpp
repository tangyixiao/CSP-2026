#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7+10;
int n,m,a[N],b[N],c[N];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i=1;i<=n;i++){
        memset(b,0,sizeof(b));
        for (int j=i;j<=n;j++){
            b[j]=1;
            for (int k=i;k<j && b[k]==1;k++){
                if (b[k]==1 && a[k]==a[j]){
                    for (int l=k;l<j;l++){
                        b[l]=0;
                    }
                }
            }
        }
        for (int j=i;j<=n;j++){
            if (b[j]==1){
                c[a[j]]++;
            }
        }
    }
    for (int i=1;i<=m;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
