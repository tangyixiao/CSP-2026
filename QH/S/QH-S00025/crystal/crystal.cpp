#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
struct d{
    int id;int x,b;
}a[N];
bool cmp(d x1,d y){
    return x1.x>y.x;
}
int main(){
    freopen("crystal.in", "r", stdin);
    freopen("crystal.out", "w", stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){cin>>a[i].x;a[i].id=i;}
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
        int k=a[i].x,ans=0;
        for(int j=i+1;j<=n;j++){
            ans+=k-a[j].x;
        }
        a[i].b=ans;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i].b<=m){
            ans=max(ans,a[i].id);
        }
    }
    cout<<ans<<endl;
    return 0;
}