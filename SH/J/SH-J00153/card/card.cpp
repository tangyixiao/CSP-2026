#include <bits/stdc++.h>
using namespace std;
#define N 500010

int n, m, a[N], cnt[N];
bool inStack[N];
stack<int> st;

void output() {
    for (int i = 1; i <= m; ++i) {
        cout << cnt[i] << " ";
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr), cout.tie(nullptr);

    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        memset(inStack, 0x0, sizeof(inStack));

        for (int j = i; j <= n; ++j) {
            if (inStack[a[j]] == false) {
                inStack[a[j]] = true;
                st.push(a[j]);

            } else {
                while (st.top() != a[j]) {
                    inStack[st.top()] = false;
                    st.pop();
                }
            }
        }

        while (!st.empty()) {
            ++cnt[st.top()];
            st.pop();
        }
    }

    output();
    return 0;
}