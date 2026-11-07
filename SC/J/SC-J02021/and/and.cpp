#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int result;
bool cmp(int a,int b){
    return a>b;
}
int main(){
   // freopen("and.in","r",stdin);
   // freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(m==1){
        int maxa=0;
        for(int i=1;i<=n;i++){
            maxa=max(maxa,a[i]);
        }
        result=maxa;
    }
    cout<<result;
    return 0;
}
