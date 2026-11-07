#include <bits/stdc++.h>
#define int long long
using namespace std;

using pic = pair<int, char>;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
	vector<pic> nums(n);
	for(auto &i : nums) cin >> i.first >> i.second;
	
	int ans = 0;
	int l = 0, r = n - 1;
	while(r > l){
		int mid = min(nums[l].first, nums[r].first);
		if(nums[l].second != nums[r].second) ans += mid;
		nums[l].first -= mid;
		nums[r].first -= mid;
		if(nums[l].first <= 0) l++;
		if(nums[r].first <= 0) r--;
	}
	cout << ans << '\n';
	return 0;
}
