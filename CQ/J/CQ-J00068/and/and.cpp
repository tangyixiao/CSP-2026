#include<bits/stdc++.h>
using namespace std;
int a[200020];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int maxn=0;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n;j++){
            maxn=a[1]&a[2];
            if(a[i]&a[j]>maxn){
                maxn=a[i]&a[j];
            }
        }
    }
    cout<<maxn;
    return 0;
}
