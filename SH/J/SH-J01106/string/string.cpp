#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,f,l;
    long long cnt=0;
    int g[200005];
    char x[200005];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>g[i]>>x[i];
    }
    f=1;
    l=n;
    while(f!=l){
        if(g[f]>g[l]){
            if(x[f]!=x[l])cnt+=g[l];
            g[f]-=g[l];
            l--;
        }
        else{
            if(x[f]!=x[l])cnt+=g[f];
            g[l]-=g[f];
            f++;
        }
    }


    cout<<cnt;
    return 0;
}
