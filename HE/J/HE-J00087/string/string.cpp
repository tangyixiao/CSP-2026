#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
typedef long long ll;
ll n,a[maxn],L,ans;
string t;
char c[maxn];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i] >> c[i];
        L += a[i];
        for(int j = 1;j <= a[i];j++)t += c[i];
    }
    t = ' ' + t;
    ll mid = (L + 1) / 2,ans = 0;
    ll l = 1,r = t.size()-1;
    while(l <= r && l <= mid && r >= mid){
        if(t[l] != t[r])ans++;
        l++,r--;
    }
    cout << ans << endl;
    return 0;
}
