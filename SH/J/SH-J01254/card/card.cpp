#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N=5e5,M=3e5;
int n,m,a[N],ans[M],b[M];

signed main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    cin >> n >> m;
    for(int i=1;i <= n;i++){
        cin >> a[i];
    }
    for(int i=n;i >= 1;i--){
        if(b[a[i]]) for(int j=i+1;(b[a[j]] != 0?a[j] != a[i]:1);j++) b[a[j]] = 0;
        b[a[i]] = 1;
        for(int j=1;j <= m;j++) ans[j] += b[j];
    }
    for(int i=1;i <= m;i++){
        cout << ans[i] << " ";
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
