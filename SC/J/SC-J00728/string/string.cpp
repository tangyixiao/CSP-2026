#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int MAXN=2e5;
int n;
pair<int,char>p[MAXN+11];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>p[i].first>>p[i].second;
    int l=1,r=n;
    long long res=0;
    while(l<=r){
        int t=min(p[l].first,p[r].first);
        res+=int(p[l].second!=p[r].second)*t;
        if(p[l].first<p[r].first)
            p[l++].first=0,p[r].first-=t;
        else if(p[l].first>p[r].first)
            p[l].first-=t,p[r--].first=0;
        else
            p[l++].first=p[r--].first=0;
    }
    cout<<res<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int T=1;
    // cin>>T;
    while(T--)
        solve();
    return 0;
}