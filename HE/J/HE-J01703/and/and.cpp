#include<bits/stdc++.h>
using namespace std;
int n,m,a[200000],b[200000],c[200000];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int o=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                b[o]=a[i]&a[j];
                c[o]=b[o];
                o++;
            }
        }
    }
    int p=0;
    for(int i=2;i<=m;){
        if((m-i)%2==0){
            int p=0;
            for(int j=0;j<=o;j++){
                for(int x=0;x<=o;x++){
                    if(x!=j){
                        c[p++]=b[j]&b[x];
                    }
                }
            }
            i+=2;
        }else{
            for(int j=0;j<=o;j++){
                for(int x=0;x<=o;x++){
                    if(x!=j){
                        c[p++]=a[j]&a[x];
                    }
                }
            }
            i+=1;
        }
    }
    int t=max(c[0],c[1]);
    for(int i=2;i<=p;i++){
        t=max(t,c[i]);
    }
    cout<<t;
    return 0;
}
