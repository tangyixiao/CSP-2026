#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main ()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m, ans = 0, l = 1, sum, maxn = 0;
	cin >> n >> m ;
	for (int i = 1; i<=n; i++){
		cin >> a[i];
		maxn = max(maxn, a[i]);
	}
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=n; j++){
			int m1 = m;
			sum = a[i];
			while(m1 > 0){
				sum ^= a[j+l];
				m1--;
				l++;
			}
				ans = sum;
		}
	}
	cout << ans;
	return 0;
} 