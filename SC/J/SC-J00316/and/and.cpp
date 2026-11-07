#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n,m,ans,a[N];
bool can[N];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i = 1;i <= n;i++) scanf("%d",&a[i]);
    for(int i = 1;i <= n;i++) can[i] = 1;
    for(int j = 29;j >= 0;j--){
        int cnt = 0;
        for(int i = 1;i <= n;i++)
            if(can[i] && (a[i] >> j & 1)) cnt++;
        if(cnt < m) continue;
        for(int i = 1;i <= n;i++)
            if(!(a[i] >> j & 1)) can[i] = 0;
        ans += 1 << j;
    }
    cout << ans;
}
