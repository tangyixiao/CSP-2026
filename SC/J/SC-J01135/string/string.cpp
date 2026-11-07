#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
string a,v,t;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i = 1;i <= n;i++){
        int u;
        cin >> u >> v;
        for(int j = 1;j <= u;j++){
            t += v;
        }
    }
    int ts = t.size();

    for(int i = 0;i < ts / 2;i++){
        int r =ts - 1 - i;
        if(t[i] != t[r]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
