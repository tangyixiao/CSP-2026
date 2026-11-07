#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n,a[N];
long long ans;
char c[N];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    scanf("%d",&n);
    for(int i = 1;i <= n;i++) scanf("%d %c",&a[i],&c[i]);
    for(int l = 1,r = n;l <= r;){
        if(c[l] != c[r]) ans += min(a[l],a[r]);
        if(a[l] == a[r]) l++,r--;
        else if(a[l] < a[r]) a[r] -= a[l++];
        else a[l] -= a[r--];
    }
    cout << ans;
}
