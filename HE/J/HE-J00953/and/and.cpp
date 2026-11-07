#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m,maxn=0;
    cin>>n>>m;
    int q[n];
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    int u=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int a=q[m],b=q[n];
            string ad="",bd="";
            int ans=0;
            while(a){
                if(a/2*2==a){
                    ad+='0';
                }else{
                    ad+='1';
                }
                a=a/2;
            }
            while(b){
                if(b/2*2==b){
                bd+='0';
            }else{
                bd+='1';
            }
            b=b/2;
            }
            if(ad.size()>bd.size()){
                for(int i=0;i<ad.size()-bd.size();i++){
                    bd+='0';
                }
            }else{
                for(int i=0;i<bd.size()-ad.size();i++){
                    ad+='0';
                }
            }
            for(int i=0;i<ad.size();i++){
                if(ad[i]==bd[i]){
                    ans+=pow(2,i+1);
                }else{
                    ans+=0;
                }
            }
            maxn=max(maxn,ans);
        }
    }
    cout<<maxn;

    return 0;
}
