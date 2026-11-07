#include<bits/stdc++.h>
using namespace std;

const int N=2e5+50;
long long n, m, arr[N], ans;
bool flag[N]={0};
long long dfs(long long a, long long val, long long i)
{
	//cout << val << endl;
	if (a == m) return val;
	long long mxV=0;
	for (long long i=1;i<=n;i++){
		if (!flag[i]){
			flag[i]=1;
			//cout << dfs(a+1, val&arr[i], i) << "\n";
			mxV = max(mxV, dfs(a+1, val&arr[i], i));
			flag[i]=0;
		}
	}
	val &= mxV;
	return val;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;i++) cin >> arr[i];
	if (m == 1){
		long long mxV=0;
		for (int i=1;i<=n;i++) mxV = max(mxV, arr[i]);
		cout << mxV;
	} else if (m == n){
		for (int i=1;i<=n;i++) ans &= arr[i];
		cout << ans;
	} else if (m <= 2000) {
		for (int i=1;i<=n;i++){
			flag[i]=1;
			ans = max(ans, dfs(1, arr[i], i));
			flag[i]=0;
		}
		cout << ans;
	} else {
		sort(arr+1, arr+n+1);
		cout << arr[n-m+1];
	} 
	return 0;
}