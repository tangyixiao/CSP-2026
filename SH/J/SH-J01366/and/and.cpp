#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int c[N];
bool cmp(int x,int y){
    return x>y;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int m,n;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c,c+n,cmp);
    int ans=c[0];
    for(int i=1;i<m;i++){
        ans&=c[i];
    }
    cout<<ans;
    return 0;
}