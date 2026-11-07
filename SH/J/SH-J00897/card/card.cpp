#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long t[500010];
long long y[500010];
int s[300010];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=0;k<n;k++){
                if(y[k]==t[j]){
                    for(int l=k;l<n;l++){
                        y[l]=0;
                    }
                }
            }
            y[j]=t[j];
        }
        for(int p=0;p<n;p++){i
            for(int u=1;u<=m;u++){
                if(y[p]!=u){
                    continue;
                }
                s[u]++;
            }
        }
        memset(y,0,sizeof(y));
    }
    for(int i=1;i<=m;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
