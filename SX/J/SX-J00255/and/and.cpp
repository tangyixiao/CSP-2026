#include <bits/stdc++.h>
using namespace std;
int s[200000];
vector<int>v;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,ans;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    if(m==n){
        for(int i=2;i<=n;i++){
            ans=(s[i-1]&s[i]);
        }
        cout<<ans;
        return 0;
    }
    if(m==1){int maxn=0;
        for(int i=1;i<=n;i++){
            maxn=max(s[i],maxn);
        }
       cout<<maxn;
       return 0;
       }
       int maxn=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            maxn=max(maxn,(s[i]&s[j]));
        }
    }
    cout<<maxn;
    return 0;
}
