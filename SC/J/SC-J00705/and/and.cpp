#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n[2],m;
int a[2][N];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n[1]>>m;
    for(int i=1;i<=n[1];++i)cin>>a[1][i];
    sort(a[1]+1,a[1]+n[1]+1,[](int lhs,int rhs){return lhs>rhs;});
    int ans=0;
    for(int i=29;i>=0;--i){
        int d=(i&1);
        if(!n[d])break;
        for(int j=1;j<=n[d];++j)
            if(a[d][j]>>i&1)a[d^1][++n[d^1]]=a[d][j];
        if(n[d^1]>=m)ans+=(1<<i);
        else{
            n[d^1]=n[d];
            for(int j=1;j<=n[d];++j)a[d^1][j]=a[d][j];
        }
        n[d]=0;
    }
    cout<<ans<<"\n";
    return 0;
}