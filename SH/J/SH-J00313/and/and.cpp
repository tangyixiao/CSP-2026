#include <bits/stdc++.h>
using namespace std;

int a[200005], cnt1[35], ans;

bool cmp(int x, int y){
	return x > y;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m, max_d = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++){
		cin >> a[i];
		int d = log2(a[i]);
		max_d = max(max_d, d);
		for (int j = 0; j <= d; j ++){
			cnt1[j] += ((a[i] & (int)pow(2, j)) >> j);
		}
	}

	sort(a + 1, a + n + 1, cmp);

	int cntnum = n, cntnum1 = n;

	for (int i = max_d; i >= 0; i --){
		cntnum = cntnum1;
		if (m > cnt1[i]){
			for (int j = 1; j <= cntnum; j ++){
				a[j] = (a[j] & (int)pow(2, i) - 1);
			}
		}
		else {
			ans += (int)pow(2, i);
			for (int j = 1; j <= cntnum; j ++){
				if ((a[j] & (int)pow(2, i)) == 0){
					for (int k = 0; k < i; k ++){
						cnt1[k] -= ((a[j] & (int)pow(2, k)) >> k);
					}
					a[j] = 0;
					cntnum1 --;
				}
			}
			
		}
		sort(a + 1, a + n + 1, cmp);
	}
	cout << ans << endl;
	return 0;
} 
