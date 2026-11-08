#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char s[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans = 0;
	cin >> n;
	a[0] = 0;
	for(int i = 1;i <= n;i ++) {
		cin >> a[i] >> s[i];
		a[i] += a[i - 1];
	} 
	long long l = 0,r = a[n],p = 1,q = n - 1;
	while(l < r) {
		if(s[p] != s[q + 1]) {
			ans += min(a[p] - l,r - a[q]);
		}
		//cout << ans << " " << l << " " << r << " " << p << " " << q << endl;
		if(a[p] - l > r - a[q]) r = a[q --],l = a[n] - r;
		else if(a[p] - l < r - a[q]) l = a[p ++],r = a[n] - l;
		else l = a[p ++],r = a[q --];
		
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*

6
10000 a
10000 a
10000 a
10000 b
10000 b
10000 b

*/
