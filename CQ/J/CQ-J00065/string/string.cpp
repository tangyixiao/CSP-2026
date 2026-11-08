#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans;
int a[200001],b[200001];
signed main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        char c;
        cin>>c;
        b[i]=c-'a';
    }
    int dqr,less;
    dqr=n;
    less=a[n];
    for(int i=1;i<dqr;){
        if(a[i]>less){
            if(b[dqr]==b[i]) ans+=0;
            else ans+=less;
            a[i]-=less;
            dqr--;
            less=a[dqr];
        }
        if(a[i]==less){
            if(b[dqr]==b[i]) ans+=0;
            else ans+=less;
            a[i]=0;
            i++;   
            dqr--;
            less=a[dqr];         
        }
        if(a[i]<less){
            if(b[dqr]==b[i]) ans+=0;
            else ans+=a[i];
            less-=a[i];
            i++;      
        }     
    }
    cout<<ans;
}