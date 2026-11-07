#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	vector<int> nums(n);
	for(auto &i : nums) cin >> i;
	
	vector<int> ans(m, 0);
	for(int i = 0; i < n; i++){
		unordered_map<int, int> mp;
		for(int j = i; j < n; j++)
			if(!mp.count(nums[j])) mp[mp[nums[j]]] = j;
			else{
				int mid = mp[nums[j]];
				for(int v = 1; v <= m; v++)
					if(mp.count(v) && mp[v] >= mid) mp.erase(v);
				mp[nums[j]] = j;
			}
		for(int j = 1; j <= m; j++) if(mp.count(j)) ans[j - 1]++;
	}
	for(auto i : ans) cout << i << ' ';
	return 0;
}
