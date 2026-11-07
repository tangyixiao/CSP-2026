#include<bits/stdc++.h>
using namespace ::std;
 int n,m;
 int a[200005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(m==1){
         sort(a+1,a+n+1);
         cout<<a[n];
    }
    else if(m==n){
            int cnt=0;
        for(int i=1;i<=n;i++){
            cnt&=a[i];
        }
        cout<<cnt;
    }
    else if(m==2){
            int maxx=INT_MIN,cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                cnt=a[i]&a[j];
                if(cnt>=maxx)
                    maxx=cnt;
            }

        }
        cout<<maxx;

    }






    return 0;
}
