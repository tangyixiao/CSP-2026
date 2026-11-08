/* encoding: utf-8 */
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 5e5+5, M = 3e5+5;

int n, m, a[N], cnt[M];
bool init[M];
vector<int> it;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i) {
        it.clear();
        fill(init + 1, init + 1 + m, false);
        for (int j = i; j <= n; ++j) {
            if (init[a[j]]) {
                while (!it.empty() && it.back() != a[j]) {
                    init[it.back()] = false;
                    it.pop_back();
                }
            }
            init[a[j]] = true;
            it.push_back(a[j]);
        }
        for (int j = 1; j <= m; ++j)
            cnt[j] += init[j];
    }
    for (int i = 1; i <= m; ++i)
        cout << cnt[i] << " \n"[i == m];
    return 0;
}

/*
如果你是在迷惑大赏里看到我的代码的，那么请看完吧。
我的洛谷 UID 为 791222。
我突然觉得cz发的那个奇文共赏的DeepSeek评价那篇说的还有道理，
我们不禁想，what OI mean in the future?，
我们会的，也许we can find it on internet，
AI会不会代替人类思考？OI到将来会呈什么发展趋势？
就是说OI到后来还会不会meaningful？
有价值的，会不会是发明一个new、颠覆性、优雅的算法。
这些是我想问的问题。
今年的一级分数线不要上260pts，不然就真的坠了。
I wonder how, I wonder why
Yesterday I told you about the blue, blue sky
at all that i can see
Just a yellow lemon tree……
我小学的OI时光真是五彩缤纷，比现在的有趣多了。
*/