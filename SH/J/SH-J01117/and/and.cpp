//Author: yangwang2013
#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(),x.end())
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ls(x) (x << 1)
#define rs(x) (x << 1 | 1)
#define mid ((l + r) >> 1)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 200005;
ll n,m,a[MAXN],cnt[31],b[MAXN],tree[MAXN << 2];
vector<ll> num[31];

void push_up(int x){
	tree[x] = tree[ls(x)] & tree[rs(x)];
}

void build(int x,int l,int r){
	if (l == r) return tree[x] = b[l],void();
	build(ls(x),l,mid);
	build(rs(x),mid + 1,r);
	push_up(x);
	return;
}

int query(int x,int l,int r,int L,int R){
	if (L >= l && R <= r) return tree[x];
	if (L > r || R < l) return 1073741823;
	return query(ls(x),l,r,L,((L+R)>>1)) & query(rs(x),l,r,((L+R)>>1) + 1,R);
}

void solve(){
	cin >> n >> m;
	for (ll i = 1;i <= n;i++) cin >> a[i];
	for (ll i = 1;i <= n;i++) {
		for (ll j = 0;j <= 30;j++){
			if (a[i] & (1 << j)){
				cnt[j]++;
				num[j].push_back(a[i]);
			}
		}
	}
	for (int j = 29;j >= 0;j--){
		if (cnt[j] >= m){
			sort(num[j].begin(),num[j].end());
			int nn = 0;
			for (auto x : num[j])
				b[++nn] = x;
			build(1,1,nn);
			int ans = query(1,1,m,1,nn);
			for (int i = 2;i <= nn - m + 1;i++){
				ans = max(ans,query(1,i,i + m - 1,1,nn));
			}
			cout << ans << endl;
			return;
		} 
	}
	cout << 0 << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int t = 1;
	//cin >> t;
	while (t--){
		solve();
	}
	return 0;
}
