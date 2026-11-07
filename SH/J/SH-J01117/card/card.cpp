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
const int MAXN = 500005;
const int MAXM = 300005;
int n,m,a[MAXN],cnt[MAXM],ans[MAXM],b[MAXN],num;

void solve(){
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= n;i++){
		num = 0;
		memset(cnt,0,sizeof cnt);
		for (int j = i;j <= n;j++){
			cnt[a[j]]++;
			if (cnt[a[j]] > 1){
				for (int k = 1;k <= num;k++){
					if (b[k] == a[j]){
						for (int l = k;l <= num;l++){
							cnt[b[l]]--;
						}
						num = k;
						b[num] = a[j];
						break;
					}
				}
			}else b[++num] = a[j]; 
		}
		for (int j = 1;j <= num;j++){
			ans[b[j]]++;
		}
	}
	for (int i = 1;i <= m;i++) cout << ans[i] << ' ';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int t = 1;
	//cin >> t;
	while (t--){
		solve();
	}
	return 0;
}
