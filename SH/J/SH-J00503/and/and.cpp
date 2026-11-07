#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int s[N];
bool flg[40][N];
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int mxlog = 0;
	for (int i = 1; i <= n; i++){
		cin >> s[i];
		mxlog = max(mxlog, (int)log2(s[i]) + 1);
	}
	int cnt;
	int lsl = -1;
	for (int t = mxlog; t >= 0; t--){
		cnt = 0;
		for (int i = 1; i <= n; i++){
			if ((s[i] >> t) % 2 == 1){
				if (lsl == -1){
					flg[t][i] = 1;
					cnt++;
				}
				else if (flg[lsl][i]){
					flg[t][i] = 1;
					cnt++;
				}
			}
		}
		if (cnt == m){
			lsl = t;
			break;
		}
		else if (cnt > m){
			lsl = t;
		}
	}
	int ans = -1;
	for (int i = 1; i <= n; i++){
		if (flg[lsl][i] && ans == -1) ans = s[i];
		else if (flg[lsl][i]) ans &= s[i];
	}
	cout << ans << endl;
	return 0;
}
