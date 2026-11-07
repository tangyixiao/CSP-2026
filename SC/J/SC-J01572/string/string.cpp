#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
ll a[N];
char c[N];
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%lld %c", &a[i], &c[i]);
    int l = 1, r = n;
    ll ans = 0;
    while(l < r){
        int ret = min(a[l], a[r]);
        if(c[l] != c[r]) ans += ret;
        a[l] -= ret;
        a[r] -= ret;
        if(!a[l]) l++;
        if(!a[r]) r--;
    }
    printf("%lld\n", ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}