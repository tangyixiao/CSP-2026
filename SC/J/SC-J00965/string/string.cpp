#include<bits/stdc++.h>
using namespace std;

const int N=2e5+50;
long long n, a[N], ans=0;
char chr[N];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (long long i=1;i<=n;i++){
		cin >> a[i] >> chr[i];
	}
	int l=1, r=n;
	while(l<r){
		while(l<r && chr[l]==chr[r]){
			if (a[l] < a[r]) {
				a[r] -= a[l];
				l++;
			}
			else if (a[l] > a[r]) {
				a[l] -= a[r];
				r--;
			} else l++,r--;
		}
		if (l == r) break;
		//cout << l << " " << r << endl;
		if (a[l] < a[r]) {
			ans += a[l];
			a[r] -= a[l];
			l++;
		} else if (a[l] > a[r]){
			ans += a[r];
			a[l] -= a[r];
			r--;
		} else {
			ans += a[l];
			l++, r--;
		}
	}
	cout << ans;
	return 0;
}