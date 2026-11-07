#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(m==1){
            int ans=a[0];
            for(int j=1;j<=n;j++){
                cout<<a[j]<<" ";
                ans=max(a[j],a[j-1]);
            }
            cout<<ans;
            break;
        }
    }
    return 0;
}
