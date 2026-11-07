#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], cnt[300005];
bool desk[500005];
stack<int> st1, st2;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++) {
		memset(desk, 0, sizeof(desk));
		while(!st1.empty())
			st1.pop();
		while(!st2.empty())
			st2.pop();
		for(int j = i; j <= n; j++)
			st1.push(a[j]);
		while(!st1.empty()) {
			if(desk[st1.top()]) {
				while(st2.top() != st1.top()) {
					desk[st2.top()] = false;
					st2.pop();
				}
				st2.pop();
			}
			st2.push(st1.top());
			st1.pop();
			desk[st2.top()] = true;
		}
		while(!st2.empty()) {
//			cout << st2.top() << ' ';
			st2.pop();
		}
//		cout << '\n';
		for(int j = 1; j <= m; j++)
			if(desk[j]) cnt[j]++;
	}
	for(int i = 1; i <= m; i++)
		cout << cnt[i] << ' ';
	return 0;
}