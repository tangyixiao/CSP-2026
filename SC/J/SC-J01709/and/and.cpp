#include<bits/stdc++.h>
using namespace std;
const int maxn=210001;
int a[maxn];
bool cmp(const int &a,const int &b){
    return a>b;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    int ans;
    if(m==1){
        ans=a[1];
    }else{
        ans=a[1]&a[2];
        for(int i=3;i<=m;i++){
            ans=ans&a[i];
        }
    }
    cout<<ans;
    return 0;
}