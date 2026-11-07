#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2 * 1e5 + 1;
int n,a[MAXN];
long long st[MAXN],en[MAXN],curl,curr,ans,sum,mid,l,r;
char c[MAXN];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
		st[i] = en[i - 1] + 1;
		en[i] = st[i] + a[i] - 1;
	}
	if(sum % 2 == 1) {
		mid = sum / 2 + 1,l = mid - 1,r = mid + 1;
	} else {
		mid = sum / 2,l = mid,r = mid + 1;
	}
	for(int i = 1; i <= n; i++) {
		if(l >= st[i] && l <= en[i]) curl = i;
		if(r >= st[i] && r <= en[i]) curr = i;
	}
	do {
		if(l == 0 && r == sum + 1) break;
		if(c[curr] != c[curl]) {
			ans++;
		}
		l--,r++;
		if(l < st[curl]) curl--;
		if(r > en[curr]) curr++;
	} while(!(l == 0 && r == sum + 1));
	cout << ans;
	return 0;
}
