#include <bits/stdc++.h>
using namespace std;
int a[200005],n,m,ans=0;
void h(int yushu,int shangxian,int xiaxian,int xian){
    if(yushu==0){
        ans=max(ans,xian);
        return;
    }
    if(xian==0){
        return;
    }
    for(int i=xiaxian;i<=shangxian;i++){
        h(yushu-1,n-yushu+1,i+1,xian&a[i]);
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    h(m,n-m,0,1073741823);
    cout<<ans;
    return 0;
    fclose(stdin);
    fclose(stdout);

}
