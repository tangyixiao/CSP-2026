#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 10;

int n, k, ans;
int num[maxn];

bool cmp(int a, int b) {return a > b;}

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin >> n >> k;
	for (int i = 1; i <= n; i ++) cin >> num[i];
	sort(num + 1, num + 1 + n, cmp);
	
	int l = 0, r = 0, dir = LLONG_MAX;
	for (int i = 1; i <= n - k + 1; i ++){
		if (abs(num[i] - num[i + k - 1]) < dir){
			l = i, r = i + k - 1;
			dir = abs(num[i] - num[i + k - 1]);
		}
	}
	
	ans = num[l];
	for (int i = l; i <= r; i ++) ans &= num[i];
	cout << ans;
	return 0;
}