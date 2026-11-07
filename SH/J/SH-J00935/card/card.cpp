#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, a[1000005] = {}, cnt[1000005] = {}, c = 0;
	cin >> n >> m;
	for (int i = 1;i <= n;i++) cin >> a[i];
	for (int i = 1;i <= n;i++){
		long long f = 1;
		for (int j = n;j >= 1;j--){
			if (a[i] == a[j]){
				for (int k = j;k <= n;k++) cnt[a[k]]++;
				f = 0;
				break;
			}
		}
		if (f){
			for (int p = i;p <= n;p++) cnt[a[p]]++;
		}
	}
	for (long long i = 1;i <= 1000005;i++){
		if (cnt[i] != 0){
			cout << cnt[i] << " ";
			c++;
		}
		if (c == m) break;
	}
	fclose(stdin);
	fclose(stdout);
}
