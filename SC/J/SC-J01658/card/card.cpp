#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+4, M = 3e5+4;
int n, m, a[N], lst[M], ans[M], head[N], cnt;
struct edge{int to, nxt;}e[N];
inline void addedge(int u, int v){
    e[++cnt] = {v, head[u]};
    head[u] = cnt;
}
int dfs(int x){
    int sz = 1;
    for (int i=head[x];i;i=e[i].nxt)
        sz += dfs(e[i].to);
    ans[a[x]] += sz;
    return sz;
}
int main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;++i) cin >> a[i];
    for (int i=n;i>=1;--i){
        if (!lst[a[i]]) lst[a[i]] = i;
        addedge(lst[a[i]]+1, i);
    }
    dfs(n+1);
    for (int i=1;i<=m;++i) cout << ans[i] << ' ';
    return 0;
}
/*
force.cpp
```cpp
#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+4, M = 3e5+4;
int n, m, a[N], ans[M], tim[M], sta[M], top;
int main(){
    freopen("card.in", "r", stdin);
    freopen("card.ans", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;++i) cin >> a[i];
    for (int i=1;i<=n;++i){
        top = 0;
        for (int j=i;j<=n;++j){
            if (tim[a[j]]) {
                while (top!=tim[a[j]]) tim[sta[top--]] = 0;
            }
            else sta[++top] = a[j], tim[a[j]] = top;
        }
        for (int j=1;j<=top;++j) ++ans[sta[j]], tim[sta[j]] = 0;
    }
    for (int i=1;i<=m;++i) cout << ans[i] << ' ';
    return 0;
}
```

maker.py
```python
from random import *
n = 1000
m = randint(1, n)
a = list(range(1, m+1))+[randint(1, m) for i in range(m, n)]
shuffle(a)
open("card.in", "w").write(f"{n} {m}\n"
    +' '.join(map(str, a))
)
```

runner.py
```python
from os import system
system("g++ -O2 -std=c++14 -o card card.cpp")
system("g++ -O2 -std=c++14 -o force force.cpp")
for i in range(1, 10000000):
    system("python3 maker.py")
    system("./force")
    system("./card")
    if system("diff card.out card.ans"):
        print(f"Test {i}: WA!!!!!")
        exit(1)
    print(f"Test {i}: AC")
```
*/