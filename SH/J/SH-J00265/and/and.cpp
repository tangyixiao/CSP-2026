#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,m,maxn=-1e8;
bool cmp(int a,int b){
    return a<b;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i+m<=n;i++){
        long long u=a[i+1];
        for(int k=i+2;k<=i+m;k++){
            u&=a[k];
        }
        maxn=max(maxn,u);
    }
    cout<<maxn;
    return 0;
}
