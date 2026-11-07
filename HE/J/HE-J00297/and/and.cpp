#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0,statu[n+1];
    for(int j=1;j<=n;j++){
        for(int x=1;x<=n;x++){
            statu[x]=0;
        }
        statu[j]=1;
        for(int y=1;y<=n-1;y++){
            int rt=a[j];
            for(int i=1;i<=m-1;i++){
                for(int k=1;k<=n;k++){
                    if(statu[k]==0){
                        rt=rt&a[k];
                        statu[k]=1;
                        break;
                    }
                }
            }
            if(rt>ans){
                ans=rt;
            }
        }
    }
    cout<<ans;
    return 0;
}
