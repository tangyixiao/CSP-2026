#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    int ans=0;
    cin>>n>>m;
    int a[200050]={};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    if(m==1){
        cout<<a[n];
    }
    if(m==n){
        ans=a[1];
        for(int i=2;i<=n;i++){
            ans=ans&a[i];
        }
        cout<<ans;
    }
    if(m==2){
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int l=a[i]&a[j];
                if(ans<l){
                    ans=l;
                }
            }
        }
        cout<<ans;
    }
    return 0;
}
