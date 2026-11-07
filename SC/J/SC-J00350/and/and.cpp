#include<bits/stdc++.h>
using namespace std;
int n, m, ans, a[200005];
int main(){
    freopen("and.in","r", stdin);
    freopen("and.out", "w", stdout);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        for(int j=1; j<=m; j++){
            ans=a[i]&a[i-1];
        }
    }
    cout << ans << endl;
    return 0;
}

