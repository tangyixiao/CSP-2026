#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+4;
int n, tot;
ll a[N], ans;
char c[N];
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i=1;i<=n;++i) cin >> a[i] >> c[i];
    for (int i=1;i<=n;++i){
        if (!tot||c[i]!=c[tot]) a[++tot] = a[i], c[tot] = c[i];
        else a[tot] += a[i];
    }
    ll tmp1 = a[1], tmp2 = a[tot];
    char c1 = c[1], c2 = c[tot];
    for (int i=1, j=tot;i<j;){
        ll k = min(tmp1, tmp2);
        if (c1!=c2) ans += k;
        tmp1 -= k, tmp2 -= k;
        if (!tmp1) tmp1 = a[++i], c1 = c[i];
        if (!tmp2) tmp2 = a[--j], c2 = c[j];
    }
    cout << ans << '\n';
    return 0;
}
/*
force.py
```python
n = int(input())
s = ''.join([c*int(a) for a, c in [input().split() for i in range(n)]])
print(sum(1 for i in range(len(s)//2) if s[i]!=s[-i-1]))
```

maker.py
```python
from random import *
from string import ascii_lowercase
n = 1000
m = 50
open("string.in", "w").write(f"{n}\n"+''.join(
    f"{randint(1, m)} {choice(ascii_lowercase)}\n" for i in range(n)
))
```

runner.py
```python
from os import system
system("g++ -O2 -std=c++14 -o string string.cpp")
for i in range(1, 10000000):
    system("python3 maker.py")
    system("python3 force.py < string.in > string.ans")
    system("./string")
    if system("diff string.out string.ans"):
        print(f"Test {i}: WA!!!!!")
        exit(1)
    print(f"Test {i}: AC")
```
*/