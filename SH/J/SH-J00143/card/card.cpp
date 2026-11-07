#include <stdio.h>
#include <vector>
#include <algorithm>
// I want to AK
int a[500001];
std::vector<int> pos[300001];
int nxt[500001];
std::vector<int> sons[500001];
int sontreesize[500001];
int deep[500009];
int mindeepnode[300001];
void dfs(int x) {
    deep[x] = deep[nxt[x]] + 1;
    sontreesize[x] = 1;
    for (int to : sons[x]) {
        dfs(to);
        sontreesize[x] += sontreesize[to];
    }
    if (deep[x] < deep[mindeepnode[a[x]]]) {
        mindeepnode[a[x]] = x;
    }
}
int main(void) {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    // 11:11 wc forget to init mindeeonode
    deep[500009] = 1e9;
    for (int i = 0; i < 300000; ++i) {
        mindeepnode[i] = 500009;
    }


    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        pos[a[i]].push_back(i);
    }
    for (int i = 0; i < n; ++i) {
        if (pos[a[i]].back() > i) {
            nxt[i] = *std::upper_bound(pos[a[i]].begin(), pos[a[i]].end(), i);
        } else {
            nxt[i] = i + 1;
        }
    }
    // Why no Chinese?
    // nxt is a tree
    // start dfs from root(the last pos)
    // calc the son-tree size
    // for each i:
    // find the node that its value is i and its deep is the min
    // the ans is its son-tree size
    // now is 10:44, I think I can AK
    for (int i = 0; i < n; ++i) {
        sons[nxt[i]].push_back(i);
    }
    dfs(n - 1);
    for (int i = 1; i <= m; ++i) {
        printf("%d ", sontreesize[mindeepnode[i]]);
    }
    putchar('\n');
    // It's 10:57
    // I have passed the samples.
    // big samples failed.
    // 11:21 I have passed big samples.
    return 0;
}