#include<bits/stdc++.h>
using namespace std;
int n,ans=0,xb=1,bj=0;
struct H{
    int w;
    char m;
    int g;
};
H a[200005];
bool f=1;
int mm[500005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    int xb=1;
    int sum=0;
    cin>>a[1].w>>a[1].m;
    a[1].g=a[1].m-'a'+1;
    for(int i=2;i<=n;i++){
        cin>>a[i].w>>a[i].m;
        a[i].g=a[i].m-'a'+1;
        if(a[i].m!=a[i-1].m){
            f=0;
        }
        for(int j=xb;j<a[i].w+xb;j++){
            mm[j]=a[i].g;
        }
        xb+=a[i].w;
    }
    for(int i=1;i<=xb/2;i++){
        if(mm[i]!=mm[xb-i+1]){
            ans++;
        }
    }
    if(f){
        cout<<0;
        return 0;
    }
    cout<<ans;
    //Trick||Treat!
    return 0;
}
