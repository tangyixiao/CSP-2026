#include <bits/stdc++.h>
using namespace std;
long long ans, a[200005];
char b[200005], lc;
int n, lg;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	int l = 1, r = n;
	while (l < r) {

		if (b[l] != b[r])
			ans += min(a[l], a[r]);
		if (a[l] < a[r]) {
			//ans+=a[l];
			a[r] -= a[l];
			a[l] = 0;
			l++;
			//if(a[i+1]&&a[i+1]==a[n-i+1])
		} else if (a[l] == a[r]) {
			a[r] = 0;
			a[l] = 0;
			r--;
			l++;

		} else {
			//ans+=a[r];
			a[l] -= a[r];
			a[r] = 0;
			r--;
		}
	}
	/*else{
		if(a[l]<a[r]){
			l++;
			a[r]-=a[l];
			a[l]=0;
		}
		else if(a[l]==a[r]){
			a[r]=0;a[l]=0;r--;l++;
		}
		else{

		}*/

	cout << ans;
	return 0;
}
