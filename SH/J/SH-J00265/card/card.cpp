#include<bits/stdc++.h>
using namespace std;
bool b[500005];
int a[500005],a2[500005],n,m,m2[500005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a2[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=500005;j++){
            b[j]=1;
            a[j]=a2[j];
        }
        for(int j=i;j<=n;j++){
            for(int k=i;k<j;k++){
                if(a2[j]==a[k] && b[k]){
                    for(int i1=k;i1<j;i1++){
                        b[i1]=0;
                    }
                }
            }
        }
        for(int j=i;j<=n;j++){
            if(b[j])m2[a[j]]++;
        }
    }
    for(int i=1;i<=m;i++){
        cout<<m2[i]<<" ";
    }
    return 0;
}
