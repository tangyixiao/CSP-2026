#include<bits/stdc++.h>
using namespace std;
long long m,n,a[600000],b[500000],c[800000],d[800000],o[800000];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.in","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            b[j]=a[j];
            c[a[j]]++;
            if(c[a[j]]==2){
                for(int k=o[a[j]];k<j;k++){
                    b[k]=0;
                }
		        for(int w=1;w<=n;w++){
                    c[w]=0;
				    if(b[w]!=0){
                        c[b[w]]=1;
                    }
                }
            }
            o[b[j]]=j;
        }
        for(int r=1;r<=n;r++){
            if(b[r]!=0){
                d[b[r]]++;
            }
        }
        for(int e=1;e<=n;e++){
            c[e]=0;
            b[e]=0;
        }
    }
    for(int i=1;i<=m;i++){
        cout<<d[i]<<" ";
    }
}
