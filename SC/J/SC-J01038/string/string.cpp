#include<bits/stdc++.h>
using namespace std;
struct str{
    char c;
    long long k;
}a[200010];
long long n, ans = 0;
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i].k >> a[i].c;
    int i = 1, j = n;
    while(i < j) {
        if(a[i].c != a[j].c) {
            if(a[i].k > a[j].k) {
                ans += a[j].k;
                a[i].k -= a[j].k;
                j --;
            }else if(a[j].k > a[i].k) {
                ans += a[i].k;
                a[j].k -= a[i].k;
                i ++;
            }else {
                ans += a[j].k;
                i ++; j --;
            }
        }else {
            if(a[i].k > a[j].k) {
                a[i].k -= a[j].k;
                j --;
            }else if(a[j].k > a[i].k) {
                a[j].k -= a[i].k;
                i ++;
            }else {
                i ++; j --;
            }
        }
    }cout << ans;
    return 0;
}