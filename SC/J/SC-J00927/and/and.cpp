#include<bits/stdc++.h>
using namespace std;
int n,m,ans;vector<int>a,b;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n>>m,a.resize(n);
    for(int&v:a)cin>>v;
    for(int j=29;~j;j--){
        b={};
        for(int v:a)if((v>>j)&1)b.push_back(v);
        if(b.size()>=m)ans|=(1<<j),a=b;
    }cout<<ans<<"\n";
    cout.flush();
    return 0;
}