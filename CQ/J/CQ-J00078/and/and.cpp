#include<iostream>
#include<iomanip> 
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a,int b) {
	return a > b;
}
int main() {
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n , m;cin >> n >> m; long long ans = 0; bool flag = true;
	int t = n;
	while (t) {
		if (t % 2 != 0) flag = false;
		t/=2;
	}
	vector<long long> nums(n);
	for (int i = 0;i < n; ++ i) cin >> nums[i];
	sort(nums.begin() , nums.end() , cmp);
	if (n == m) {
		ans = nums[0];
		for (int i = 1;i < n; ++i) ans &= nums[i];
		cout << ans <<"\n";
	}else if (m == 1) cout << nums[0] << "\n";
	else if (m == 2 && n <= 2000) {
		for (int i = 0;i < n; ++ i) 
			for (int j = i + 1;j < n; ++ j)
				ans = max(ans , nums[i] & nums[j]);
		cout << ans <<"\n";
	}else if (flag)
	{
		ans = nums[0];
		for (int i = 1;i < m; ++i) {
			ans &= nums[i];
		}
		cout << ans << "\n";
	}
	else cout << nums[m - 1] << "\n";
	return 0; 
} 
