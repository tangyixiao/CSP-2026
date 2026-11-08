#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int arr[N];
int n,m;
bool cmp(int a,int b) {
	return a > b;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		cin >> arr[i];
	}
	sort(arr + 1,arr + n + 1,cmp);
	int ans = arr[1];
	for (int i = 2;i <= m;i++) {
		ans = ans & arr[i];
	}
	cout << ans;
	return 0;
}
/*
我怎么拉完了 
*/
