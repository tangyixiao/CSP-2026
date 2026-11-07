#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
ll b[40];//标记这个位次的1出现次数
ll pmax;//最大位位置
vector<ll>vv;
vector<ll>bv[40];//记录该位的1的提供者地址
ll bvn[N][N];//记录i有没有在该位提供1
ll ans;
ll bvvv[N];//转化为bv
ll bvt;


ll n, m;
ll a[N];
ll mx = 0;

int main() {
	freopen("in.and", "r", stdin);
	freopen("out.and", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	cout << mx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}