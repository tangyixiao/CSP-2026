#include"bits/stdc++.h"
using namespace std;
int n,m;
int a[100000];
int b[100000]={0};
int sum[100000]={0};
int main(){
    //freopen("card.in","r",stdin);
    //freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int ju=1;ju<=m;ju++){
            b[100000]={0};
    for(int i=ju;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(i==1){
                a[1]=b[1];
            }else{
                if(a[i]!=b[j]){
                    a[i]=b[j];
                }else{
                    for(int k=i;k<=j-1;k++){
                        b[k]=0;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        sum[i]+=b[i];
    }
    }
    for(int i=1;i<=m;i++){
        cout<<sum[i];
    }
    return 0;
}
