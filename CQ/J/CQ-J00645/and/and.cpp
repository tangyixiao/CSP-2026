#include<bits/stdc++.h>
#define ll long long
using namespace std;
namespace ANDs{
    const ll maxx=2147483647;
    int n,m,a[200005];ll ans=0;
    void solve(int last,int dep,ll res){
        for(int i=last+1;i<=n;i++){
            if(dep==m){
                ans=max(ans,res&(1ll*a[i]));
            }
            else solve(i,dep+1,res&(1ll*a[i]));
        }
    }
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin.tie(0)->ios::sync_with_stdio(0);
    cin>>ANDs::n>>ANDs::m;
    for(int i=1;i<=ANDs::n;i++)cin>>ANDs::a[i];
    ANDs::solve(0,1,ANDs::maxx);
    cout<<ANDs::ans<<"\n";
    return 0;
}
