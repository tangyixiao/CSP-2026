#include <bits/stdc++.h>
using namespace std;
int a[200050];
bool flag[200050];
bool yes[200050];
int nts[40];
int main(){
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	int n, m, ans = 0;
	cin >> n >> m;
	int k = 0;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		int cct = a[i];
		int temp = 0;
		while (cct){
			if (cct & 1)
				nts[temp]++;
			cct /= 2;
			temp++;
		}
		if (temp > k) k = temp;
	}
	int now = n, pass = 0;
	for (int i = k - 1; i >= 0; i--){
		int f = nts[i] + pass;
		if (nts[i] >= m){
			for (int j = 1; j <= n; j++){
				if (!(flag[j] || (a[j] & (1 << i)) || yes[i])){
					now--;
					int temp = a[j];
					for (int g = 0; g <= i; g++){
						if (temp & 1){
							nts[g]--;	
						}temp /= 2;
					}
					flag[j] = true;
				}
			}
			if (nts[i] >= m) ans += (1 << i);
		}
			f = nts[i] + pass;
		if (f <= m){
			for (int j = 1; j <= n; j++){
				if (!(flag[j] || yes[i]) && (a[j] & (1 << i))){
					pass++;
					yes[j] = true;
				}
			}
		}
	}
	cout << ans;
	fclose (stdin);
	fclose (stdout);
	return 0;
}
