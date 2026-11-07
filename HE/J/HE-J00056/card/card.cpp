#include<bits/stdc++.h>
using namespace std;
int n,m,a[500050],b[300050],f=0,c[5],ans1,ans2;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    if(m==1){
        cout<<n;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(m==2){
        for(int i=1;i<=n;i++){
            f=a[i];
            for(int j=i;j<=n;j++){
                if(b[a[j]]==0){
                    b[a[j]]=1;
                    c[a[j]]=1;
                }else{
                    if(a[j]==f){
                        c[a[j]+1]=0;
                        c[a[j]-1]=0;
                        b[a[j]+1]=0;
                        b[a[j]-1]=0;
                    }
                }
            }
            if(c[1]==1){
                ans1++;
            }
            if(c[2]==1){
                ans2++;
            }
            b[1]=0;b[2]=0;c[1]=0;c[2]=0;
        }
        cout<<ans1<<" "<<ans2;
    }
    return 0;
}
