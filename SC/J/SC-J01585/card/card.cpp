#include<bits/stdc++.h>
using namespace std;
vector<int> v;
unordered_map<int, int> mp, mmp;
int ans[300010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0, a; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	
	for (int i = 0; i < n; i++) {
		unordered_map<int, int> mp, mmp;
		for (int j = i; j < n; j++) {
			if (mp.find(v[j]) == mp.end()) {
				mp[v[j]] = j, mmp[v[j]] = 1;
			} else {
				mmp[v[j]]++;
				for (int k = mp[v[j]]; k < j; k++) {
					mmp[v[k]]--;
					if (mmp[v[k]] == 0) mp.erase(v[k]), mmp.erase(v[k]);
				}
				mp[v[j]] = j;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (mp.find(j) == mp.end()) continue;
			ans[j]++;
		}
	}
	
	/*
	for (int i = n - 1; i >= 0; i--) {
		if (mp.find(v[i]) == mp.end()) {
			mp[v[i]] = i;
			mmp[v[i]] = 1;
		} else {
			mmp[v[i]]++;
			for (int j = i; j < mp[v[i]]; j++) {
				mmp[v[j]]--;
				if (mmp[v[j]] == 0) mp.erase(v[j]), mmp.erase(v[j]);
			}
			mp[v[i]] = i;
		}
		for (int j = 1; j <= m; j++) {
			if (mp.find(j) == mp.end()) continue;
			ans[j]++;
		}
	}
	*/
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
}