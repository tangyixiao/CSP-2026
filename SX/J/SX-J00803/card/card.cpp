#include<bits/stdc++.h>
using namespace std;
const int N = 5e3+5,M = 3e5+5;
int n,m,a[N];
int ls[N];
int c[N];
bool vis[N];
vector<int>v[N];
signed main() {
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i = 1; i<=n; i++) {
        cin>>a[i];
    }
    if(m>=100000) {
        for(int i = 1; i<=n; i++) {
            if(a[i]!=a[i-1]) {
                c[a[i]]++;
            }
        }
        for(int i = 1; i<=m; i++) {
            cout<<c[i]<<' ';
        }
        return 0;
    }
    for(int i = n; i>=1; i--) {
        if(ls[a[i]]==0) {
            v[i] = v[i+1];
            v[i].push_back(a[i]);
            ls[a[i]] = i;
        } else {
            v[i] = v[ls[a[i]]];
        }
    }
    for(int i = 1; i<=n; i++) {
        for(int to:v[i]) {
            c[to]++;
        }
    }
    for(int i = 1; i<=m; i++) {
        cout<<c[i]<<' ';
    }
    return 0;
}
