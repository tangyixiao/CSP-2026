#include<iostream>
using namespace std;
const int N=2e5+9;
long long a[N],ans=0;
int n,m;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int k=30;k>=0;k--){
        int cut=0;
        for(int i=1;i<=n;i++){
            if((a[i]>>k)&1)cut++;
        }
        if(cut<m)continue;
        ans+=(1<<k);
        for(int i=1;i<=n;i++){
            if(!((a[i]>>k)&1))
                a[i]=0;
        }
    }
    cout<<ans;
    return 0;
}