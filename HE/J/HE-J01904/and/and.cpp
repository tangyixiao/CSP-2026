#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,a[10002];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxx=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxx=max(maxx,a[i]&a[j]);
        }
    }
    cout<<maxx;
    return 0;
}
