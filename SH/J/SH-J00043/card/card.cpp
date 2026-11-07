#include <bits/stdc++.h>
using namespace std;
// 48pts 
using ll = long long;
using pii = pair <int, int>;
using veci = vector <int>;
using vecll = vector <long long>;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	
	vector <int> a(n + 1);
	vector <int> pre(n + 1);
	vector <int> process(m + 1, -1);
	vector <pair<int, int>> wdel;
	for (int i = 1; i <= n; i ++){
		cin >> a[i];
		pre[i] = process[a[i]];
		process[a[i]] = i;
		if (pre[i] > 0){
			wdel.push_back(make_pair(pre[i], i));
		}
	}
	sort(wdel.begin(), wdel.end());
	// for (auto pr : wdel) cout << "DEBUG:" << pr.first << ' ' << pr.second << '\n';

	vector <int> ans(m + 1, 0);
	vector <int> chafen(n + 1);
	for (int l = 1, pt = 0; l <= n; l ++){
		while (wdel[pt].first < l) pt ++;
		// cout << "pt = " << pt << '\n';
		int pt2 = pt;
		while (pt2 < wdel.size()){
			chafen[wdel[pt2].first] --, chafen[wdel[pt2].second] ++;
			int tmp = wdel[pt2].second;
			while (wdel[pt2].first < tmp) pt2 ++;
		}
	}
	vector <int> staytime(n + 1, 0);
	for (int i = 1; i <= n; i ++) staytime[i] = staytime[i - 1] + chafen[i];
	//for (auto i : staytime) cout << i << ' '; cout << '\n';
	for (int i = 1; i <= n; i ++){
		ans[a[i]] = max(ans[a[i]], i + staytime[i]);
	}

	for (int i = 1; i <= m; i ++) cout << ans[i] << (i == m ? '\n' : ' ');

	return 0;
}
