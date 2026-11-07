#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

namespace fio{
	constexpr int S = 1 << 20;
	char buf[S];
	size_t idx, sz;
	int gc(){
		if(idx == sz){
			sz = fread(buf, 1, S, stdin);
			idx = 0;
			if(!sz)
				return EOF;
		}
		return buf[idx++];
	}
	template <typename T>
	bool read(T& x){
		x = 0;
		T f = 1;
		int c = gc();
		while(c != EOF && (c < '0' || c > '9')){
			if(c == '-')
				f = -1;
			c = gc();
		}
		if(c == EOF)
			return false;
		while(c >= '0' && c <= '9'){
			x = (x << 3) + (x << 1) + (c ^ 48);
			c = gc();
		}
		x *= f;
		return true;
	}
	template <typename T, typename... Args>
	bool read(T&x, Args&... args){
		return read(x) && read(args...);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
//	freopen("temp.in", "r", stdin);
//	freopen("temp.out", "w", stdout);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	fio::read(n, m);
	vector <int> a(n + 1), ans(m + 1);
	bool IsA = true;
	for(int i = 1; i <= n; ++i){
		fio::read(a[i]);
		IsA = IsA && a[i] >= a[i - 1];
	}
//	if(IsA){
//		int cnt = 1;
//		int ans = 0;
//		for(int i = 2; i <= n; ++i){
//			if(a[i] != a[i - 1]){
//				cout << ans + cnt << ' ';
//				ans += cnt;
//				cnt = 1;
//			}
//			else
//				++cnt;
//		}
//		cout << ans + cnt << '\n';
//		return 0;
//	}
	vector <vector <int>> tm(n + 2, vector <int> ());
	vector <int> cnt(n + 1), pre(m + 1);
	vector <bool> isori(n + 1);
	for(int i = n; i >= 1; --i){
		if(pre[a[i]]){
			++cnt[pre[a[i]]];
			continue;
		}
		pre[a[i]] = i;
		tm[i] = tm[pre[a[i + 1]]];
		tm[i].push_back(a[i]);
		++cnt[i];
		isori[i] = true;
	}
	for(int i = 1; i <= n; ++i){
//		cout << i << ':';
		if(!isori[i])
			continue;
		for(int j = 0; j < tm[i].size(); ++j){
			ans[tm[i][j]] += cnt[i];
//			cout << tm[i][j] << " \n"[j == tm[i].size() - 1];
		}
	}
	for(int i = 1; i <= m; ++i)
		cout << ans[i] << " \n"[i == m];
	return 0;
}