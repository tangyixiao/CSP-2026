#include<bits/stdc++.h>
using namespace std;
int n,a[200050];
long long ans=0,zz=0,mq=0;
char c[200050];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    int h=n;
    if(n==1){
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        zz+=a[i];
    }
    for(int i=1;mq<zz/2;i++){
        while(a[i]>=a[h]){
            if(c[i]==c[h]){
                mq=mq+a[h];
                a[i]=a[i]-a[h];
                h--;
            }else{
                mq=mq+a[h];
                ans=ans+a[h];
                a[i]=a[i]-a[h];
                h--;
            }
        }
        if(c[i]==c[h]){
            mq=mq+a[i];
            a[h]=a[h]-a[i];
        }else{
            mq=mq+a[i];
            ans=ans+a[i];
            a[h]=a[h]-a[i];
        }
    }
    cout<<ans;
    return 0;
}
