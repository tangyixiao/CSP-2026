#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m,n,i,j,r,v;
    cin>>n>>m;
    int a[n]={0},cnt[m]={0};
    bool b[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=true;
    }
    for(v=0;v<n;v++){
        for(i=v;i<n;i++){
            bool w=false;
            for(j=v;j<i;j++){
               if(a[i]==a[j]&&b[j]){
                   w=true;
               }
               if(w){
                   b[j]=false;
               }
             }
        }
        for(r=0;r<n;r++){
            if(b[r]){
               cnt[a[r]]++;
            }
        }
        b[n]={1};
    }
    for(i=1;i<=m;i++){
        if(cnt[i]==0){
            continue;
        }
        cout<<cnt[i]<<" ";
    }
    return 0;
}

