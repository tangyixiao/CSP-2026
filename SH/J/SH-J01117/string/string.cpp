//Author: yangwang2013
#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(),x.end())
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 200005;
ll n,a[MAXN];
char c[MAXN];

void solve(){
	cin >> n;
	for (int i = 1;i <= n;i++) cin >> a[i] >> c[i];
	ll ans = 0ll;
	ll i = 1,j = n;
	while (i <= j){
		if (c[i] != c[j]){
			if (a[i] < a[j]) a[j] -= a[i],i++,ans += a[i];
			else if (a[i] == a[j]) i++,j--,ans += a[i];
			else a[i] -= a[j],j--,ans += a[j]; 
		}else{
			if (a[i] < a[j]) a[j] -= a[i],i++;
			else if (a[i] == a[j]) i++,j--;
			else a[i] -= a[j],j--;
		}
	}
	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t = 1;
	//cin >> t;
	while (t--){
		solve();
	}
	return 0;
}
