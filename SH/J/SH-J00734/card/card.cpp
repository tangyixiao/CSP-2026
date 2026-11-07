#include <bits/stdc++.h>
using namespace std;

int main() {
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	int n, m;
	cin >> n >> m;

	vector<int> seq(n), prev(n, -1), last(m + 7, -1), in(m + 7, -1), time(m + 7, 0);
	vector<bool> exist(m, false);

	for (int i = 0; i < n; i++) {
		cin >> seq[n - i - 1];
		
		if (last[seq[n - i - 1]] == -1)
			last[seq[n - i - 1]] = i;
		else {
			prev[i] = last[seq[n - i - 1]], last[seq[n - i - 1]] = i;
		}
	}

	stack<pair<int, int>> stk;
	stk.push({0, -1});

	for (int i = 0; i < n; i++) {
		if (!exist[seq[i]])
			stk.push({seq[i], i}), exist[seq[i]] = true, in[seq[i]] = 0;
		else {
			while (stk.top().first != seq[i])
				exist[stk.top().first] = false, in[stk.top().first] = -1, stk.pop();
			pair<int, int> val = {stk.top().first, i};
			stk.pop(), stk.push(val);
		}
	}

	for (int i = 1; i < n; i++) {
		pair<int, int> val = stk.top();
		stk.pop();
		if (prev[val.second] != -1 && prev[val.second] >= stk.top().second)
			stk.push({val.first, prev[val.second]});
		else
			time[val.first] += i - in[val.first], exist[val.first] = false, in[val.first] = 0;
		if (n - i - 1 >= stk.top().second)
			stk.push({seq[i], n - i - 1}), in[seq[i]] = i;
	}

	while (!stk.empty()) {
		auto val = stk.top();
		stk.pop();
		time[val.first] += n - in[val.first];
	}

	for (int i = 1; i <= m; i++)
		cout << time[i] << ' ';

	return 0;
}
