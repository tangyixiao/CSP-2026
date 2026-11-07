#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m,a[500005]={0};
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            if(a[i]==a[i-j]) cout<<a[i];
        }
    }
    return 0;
}


