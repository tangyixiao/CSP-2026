#include <bits/stdc++.h>
#define int long long
using namespace std;

int length;
pair<int, char> values[1 << 20];
int target = 0;
int result = 0;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
//	cin.exceptions(ios::badbit | ios::failbit);
	
	cin >> length;
	
	for (int current = 1; current <= length; current++) {
		cin >> values[current].first >> values[current].second;
		target += values[current].first;
	}
	const int source = target;
	target >>= 1;
	
	vector<pair<int, char> > left, right;
	left.reserve(length), right.reserve(length);
	for (int current = 1; current <= length; current++) {
//		cerr << __LINE__ << ' ' << current << ' ' << target << '\n';
		if (target <= 0) {
			right.emplace_back(values[current]);
//			cerr << __LINE__ << '\n';
			continue;
		}
//		cerr << __LINE__ << '\n';
		if (values[current].first <= target) left.emplace_back(values[current]);
		else {
			left.emplace_back(make_pair(target, values[current].second));
			right.emplace_back(make_pair(values[current].first - target, values[current].second));
		}
		target -= values[current].first;
	}

	if (source & 1) {
		if (right.front().first == 1) right.erase(right.begin());
		right.front().first -= 1;
	}
	
	reverse(right.begin(), right.end());
	
//	for (auto value : left) cerr << value.first << ' ' << value.second << '\n';
//	cerr << '\n'; for (auto value : right) cerr << value.first << ' ' << value.second << '\n';
	
//	for (auto value : left) for (int current = 1; current <= value.first; current++) cout << value.second << ' ';
//	cout << '\n'; for (auto value : right) for (int current = 1; current <= value.first; current++) cout << value.second << ' ';
//	cout << '\n';
	
	pair<size_t, size_t> ptr = { 0, 0 };
	while (ptr.first < left.size() && ptr.second < right.size()) {
		if (left[ptr.first].first > right[ptr.second].first) {
			if (left[ptr.first].second != right[ptr.second].second) result += right[ptr.second].first;
			left[ptr.first].first -= right[ptr.second].first;
			ptr.second++;
		} else if (left[ptr.first].first < right[ptr.second].first) {
			if (left[ptr.first].second != right[ptr.second].second) result += left[ptr.first].first;
			right[ptr.second].first -= left[ptr.first].first;
			ptr.first++;
		} else {
			if (left[ptr.first].second != right[ptr.second].second) result += left[ptr.first].first;
			ptr.first++, ptr.second++;
		}
	}
	
//	pair<vector<char>, vector<char> > targets;
//	for (auto value : left) for (int current = 1; current <= value.first; current++) targets.first.emplace_back(value.second);
//	for (auto value : right) for (int current = 1; current <= value.first; current++) targets.second.emplace_back(value.second);
//	cerr << targets.first.size() << ' ' << targets.second.size() << '\n';
//	for (size_t current = 0; current < targets.first.size(); current++) 
//		if (targets.first[current] != targets.second[current]) {
//			result++;
////			cerr << current << ' ';
//		}
	
	cout << result << '\n';
	
	return 0;
}