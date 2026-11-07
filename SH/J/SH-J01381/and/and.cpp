#include <iostream>//01381 
#include <vector>
#include <algorithm>
#include <queue> 
using namespace std;
int n, m;
vector<int> a(n);
vector<bool> vis(n, false);
int solve(int x, int step){
	int mx=0;
	if(step >= m)return x;
	for(int i = 0; i < n; i ++){
		if(vis[i])continue;
		mx = max(mx, a[i] & x);
		vis[i] = 1;
	}
	return solve(x & mx, step + 1);
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	a.resize(n);
	for(int i = 0; i < n; i ++){
		//cin >> a[i];
	}
	if (n == m){
		long long ans = a[0];
		for(int i = 1; i < n; i ++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == 1){
		cout << *max_element(a.begin(), a.end());
	}
	if (m == 2){
		int mx = 0;
		for(int i = 0; i < n; i ++){
			for(int j = i+1; j < n; j ++){
				mx = max(mx, a[i]&a[j]);
			}
		}
		cout << mx;
	}
	int mxx  = 0;
	for(int i = 0; i < n; i ++){
		mxx = max(mxx, solve(a[i], 0)); 
	}
	cout << mxx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
