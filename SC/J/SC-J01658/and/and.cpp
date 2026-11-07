#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+4;
int n, m, a[N];
inline bool check(int x){
    int cnt = 0;
    for (int i=1;i<=n;++i) cnt += (a[i]&x)==x;
    return cnt>=m;
}
int main(){
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;++i) cin >> a[i];
    int ans = 0;
    for (int i=29;i>=0;--i){
        if (check(ans|(1<<i))) ans |= (1<<i);
    }
    cout << ans << '\n';
    return 0;
}
/*
force.py
```python
n, m = map(int, input().split())
a = list(map(int, input().split()))
f = lambda x: x[0] if len(x)==1 else x[0]&f(x[1:])
print(max(f([a[i] for i in range(n) if S>>i&1]) for S in range(1, 1<<n) if str(bin(S)).count('1')==m))
```

maker.py
```python
from random import *
n = randint(1, 16)
m = randint(1, n)
open("and.in", "w").write(f"{n} {m}\n"+' '.join(
    f"{randint(0, (1<<30)-1)}" for i in range(n)
))
```

runner.py
```python
from os import system
system("g++ -O2 -std=c++14 -o and and.cpp")
for i in range(1, 10000000):
    system("python3 maker.py")
    system("python3 force.py < and.in > and.ans")
    system("./and")
    if system("diff and.out and.ans"):
        print(f"Test {i}: WA!!!!!")
        exit(1)
    print(f"Test {i}: AC")
```
*/