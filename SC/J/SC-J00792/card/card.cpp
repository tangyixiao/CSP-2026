#include <bits/stdc++.h>
using namespace std;
int a[500005], cnt[300005], b[500005], sum[300005];
int main ()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m, l = 0;
	cin >> n >> m;
	for (int i = 1; i<=n; i++){
		cin >> a[i];
	}
	for (int i = 1; i<=n; i++){
		for (int j = 0; j<n; j++){
			if(cnt[a[i+j]] == 0){
				b[j] = a[i+j];
				cnt[a[i+j]]++;
				sum[a[i+j]] = n-l;
				l++;
			}
		}
	}
	for (int i = 1; i<=n; i++){
		cout << sum[i] << " ";
	}
	return 0;
} 