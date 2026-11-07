#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll Len = 0;
int a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1;i<=n;i++)cin >> a[i] >> c[i];
	int l = 1,r = n;
	ll ans = 0;
	for (l = 1;l < r;l++){
		if (l == r)break;
		if (a[l] <= a[r]){
			a[r] -= a[l];
			if (c[l] != c[r])ans += a[l];
		}else{
			ll sum = a[l];
			while (sum >= a[r]){
				if (l == r)break;
				sum -= a[r];
				if (c[l] != c[r])ans += a[r];
				r--;
			}
			a[r] -= sum;
			if (c[l] != c[r])ans += sum;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
