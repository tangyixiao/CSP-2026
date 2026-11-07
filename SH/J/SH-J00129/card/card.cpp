#include <bits/stdc++.h>
using namespace std;

int n, m, a[500010], ans[300010], pos[300010], cnt[300010];

//void print(vector<int>& v) {
//	for (int i : v) printf("%d ", i);
//	printf("\n");
//}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for (int i=1; i<=n; i++) cin >> a[i];
	
	for (int i=1; i<=n; i++) {
		//printf("game %d\n", i);
		for (int i=0; i<=m; i++) {
			pos[i] = -1;
			cnt[i] = 0;
		}
		vector<int> v = {0};
		v.reserve(n+10);
		//print(v);
		
		int idx = 1;
		for (int j=i; j<=n; j++) {
			//printf("adding num %d\n", a[j]);
			if (pos[a[j]] == -1) {
				v.push_back(a[j]); 
				pos[a[j]] = idx;
				cnt[a[j]]++;
			}
			else {
				idx = pos[a[j]];
				//printf("already exist at %d\n", pos[a[j]]);
				for (int k=v.size()-1; k>pos[a[j]]; k--) {
					//printf("k (%d) > pos[a[j]] (%d) = %d\n", k, pos[a[j]], (k > pos[a[j]]));
					//printf("pop %d\n", k);
					cnt[v.back()]--;
					if (cnt[v.back()] == 0) pos[v.back()] = -1;
					v.pop_back();
				}
				//printf("pop ok\n");
			}
			//print(v);
			idx++;
		}
		
		for (int k=1; k<=m; k++) {
			ans[k] += (cnt[k] > 0);
		}
	} 
	
	for (int i=1; i<=m; i++) cout << ans[i] << ' ';
	
	return 0;
} 
