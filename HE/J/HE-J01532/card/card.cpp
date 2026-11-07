#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int f[n],ans[m]={};
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    for(int i=0;i<m;i++){
        ans[i]=0;
    }
    for(int i1=0;i1<n;i1++){
        for(int i2=i1;i2<n;i2++){
            for(int i3=i2+1;i3<n;i3++){
                if(f[i2]==f[i3]){
                    i2=i3;
                }
            }
            ans[f[i2]-1]++;
        }
    }
    for(int i=0;i<m;i++){
        cout<<ans[i];
        if(i+1<m){
            cout<<" ";
        }
    }
    return 0;
}
