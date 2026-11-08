#include<bits/stdc++.h>
using namespace std;
namespace CARDs{
    vector<int> last[500005];
    int n,m,a[500005];
    void solve(){
        for(int i=1;i<=n;i++)last[i].resize(m);
        for(int j=1;j<=n;j++){
            deque<int> q;
            for(int k=j;k<=n;k++){
                if(find(q.begin(),q.end(),a[k])!=q.end()){
                    while(q.back()!=a[k])q.pop_back();
                    q.pop_back();
                }
                q.push_back(a[k]);
            }
            for(int i : q)last[j][i]++;
        }
        return;
    }
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin.tie(0)->ios::sync_with_stdio(0);
    scanf("%d%d",&CARDs::n,&CARDs::m);
    for(int i=1;i<=CARDs::n;i++)scanf("%d",&CARDs::a[i]);
    CARDs::solve();
    for(int i=1;i<=CARDs::m;i++){
        int ans=0;
        for(int j=1;j<=CARDs::n;j++){
            if(CARDs::last[j][i]!=0)ans++;
        }
        printf("%d ",ans);
    }
    putchar('\n');
    return 0;
}
