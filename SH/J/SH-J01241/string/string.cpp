#include <bits/stdc++.h>
using namespace std;
long long n,a[200010],cnt;
char c[200010];
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i] >> c[i];
    }
    long long l = 1,r = n;
    while (l < r){
        if (c[l] != c[r]){
            cnt += min(a[l],a[r]);
        }
        if (a[l] > a[r]){
            a[l] -= a[r],r--;
        }
        else if (a[l] < a[r]){
            a[r] -= a[l],l++;
        }
        else{
            l++,r--;
        }
    }
    cout << cnt;
    return 0;
}
