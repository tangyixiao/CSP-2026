#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    long long ans=0,n,jishuz=0,jishuy,ting=0,zong=0,d,shuru=0;
    long long a[200005]={};
    char b[200005]={},e;
    cin>>n;
    cin>>a[0]>>b[0];
    zong=a[0];
    for(int i=1;i<n;i++){
        cin>>d>>e;
        zong+=d;
        if(e==b[shuru]){
            a[shuru]+=d;
        }
        else{
            shuru+=1;
            a[shuru]=d;
            b[shuru]=e;
        }
    }
    jishuy=shuru;
    while(true){
        if(zong<=1||jishuz==jishuy){
            break;
        }
        long long zuo=a[jishuz],you=a[jishuy],bian;
        bian=min(zuo,you);
        if(b[jishuz]!=b[jishuy]){
            ans+=bian;
        }
        zong=zong-bian-bian;
        a[jishuz]-=bian;
        a[jishuy]-=bian;
        if(a[jishuz]==0){
            jishuz+=1;
        }
        if(a[jishuy]==0){
            jishuy-=1;
        }


    }
    cout<<ans;
    return 0;
    fclose(stdin);
    fclose(stdout);

}
