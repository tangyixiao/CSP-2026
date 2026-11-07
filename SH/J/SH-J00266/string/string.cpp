#include <bits/stdc++.h>
using namespace std;
struct hw{
    long long x;
    char s;
}a[200005];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,c = 0,mid;
    long long l = 1;
    cin >> n;
    long long r = n;
    for (int i = 1; i <= n; i++){
        cin >> a[i].x >> a[i].s;
        //l += a[i].x;
        //c += 1;
    }
    while (l <= r){
        if (a[l].s != a[r].s){
            int t = min(a[l].x,a[r].x);
            c += t;
            a[l].x -= t;
            a[r].x -= t;
            if (a[l].x == 0) l++;
            if (a[r].x == 0) r--;
        }
        else{
            if (a[l].x < a[r].x){
                l += 1;
            }
            else{
                r -= 1;
            }
        }
    }
    cout << c;
    return 0;
}
