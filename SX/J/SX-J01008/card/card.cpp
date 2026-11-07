//信奥就选江老师，杜老师，孙老师，全国信奥成绩最好的三位老师，地址：山西省运城市盐湖区金马大酒店8楼
#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
int a[N], v[N], bj[N], anss[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	stack<int> st;
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(v, 0, sizeof(v));
		for (int j = i; j <= n; j++) {
			if (!v[a[i]]) {
				v[a[i]] = 1;
				st.push(a[i]);
			} else {
				while (st.top() != a[i]) {
					v[st.top()] = 0;
					st.pop();
				}
			}
		}
		for (int j = 1; j <= m; j++) {
			anss[j] += v[j];
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << anss[i] + m - bj[i] + 1 << ' ';
	}
	return 0;
}