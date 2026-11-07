#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int x){
	int ans = 0;
	while(x){
		if(x & 1) ans++;
		x >>= 1;
	}
	return ans;
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	int n, m;
	cin >> n >> m;
	vector<int> nums(n);
	for(auto &i : nums) cin >> i;
	
	sort(nums.begin(), nums.end(), [](int x, int y){
		int a = f(x), b = f(y);
		if(a != b) return a > b;
		return x > y;
	});
	
	int ans = nums[0];
	for(int i = 1; i < m; i++) ans &= nums[i];
	cout << ans << '\n';
	return 0;
}
