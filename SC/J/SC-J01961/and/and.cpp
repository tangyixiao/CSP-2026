#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000001]={},maxx=0;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int t=1;
    if(m==1){
        for(int i=1;i<=n;i++)maxx=max(maxx,a[i]);
    }else if(m==2){
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++)maxx=max(maxx,a[i]&a[j]);
        }
    }else if(m==3){
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                    for(int k=j+1;k<=n;k++)maxx=max(maxx,a[i]&a[j]&a[k]);
            }
        }
    }else if(m==n){
        for(int i=1;i<=n;i++)maxx&=a[i];
    }
    cout<<maxx;
    return 0;
}
