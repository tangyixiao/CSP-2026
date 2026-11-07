#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 5e5 + 5, MAXM = 3e5 + 5;
int n, m, a[MAXN], cnt[MAXM];
bool v[MAXM];
vector<int> pos[MAXM];
priority_queue<int> x; 
void solveA() {
	for(int i = n; i > 1; i--) cnt[a[i]] = max(cnt[a[i]], i);
	for(int i = 1; i <= m; i++) cout << cnt[i] << ' ';
}
void solve500() {
	for(int i = 1; i <= n; i++) {
		int q[505], cnt1 = 0;
		for(int j = i; j <= n; j++) {
			int k = 1;
			for(k = 1; k <= cnt1; k++) {
				if(a[j] == q[k]) {
					cnt1 = k - 1;
					break;
				}
			}
			q[++cnt1] = a[j];
		}
		for(int j = 1; j <= cnt1; j++) cnt[q[j]]++;
	}
	for(int i = 1; i <= m; i++) cout << cnt[i] << ' ';
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	bool A = true, B = true;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(a[i] < a[i - 1]) A = false;
	}
	if(A) {solveA(); return 0;}
	if(n <= 500) {solve500(); return 0;}
	for(int i = n; i >= 1; i--) {
		pos[a[i]].push_back(i);
	}
	for(int i = n; i >= 1; i--) {
		if(v[a[i]]) x.pop();
		else {
			v[a[i]] = true;
			cnt[a[i]] = x.size() > 0 ? max(cnt[a[i]], i - x.top()) : max(cnt[a[i]], i);
			for(auto j: pos[a[i]]) if(j != i) x.push(j);
		}
	}
	for(int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	return 0;
}
