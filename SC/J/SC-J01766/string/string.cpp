#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

int n;
int a[MAXN];
char c[MAXN];
long long s[MAXN] = {0}, e[MAXN];
unsigned long long len = 0, ans = 0;

int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i] >> c[i];
		len += a[i];
		if(i == 0) {
			e[0] = a[0] - 1;
		} else {
			s[i] = e[i-1] + 1;
			e[i] = s[i] + a[i] - 1;
		}
		
//		printf("i=%d,length=%lld\n", i, len);
//		printf("s[%d]=%lld, e[%d]=%lld\n", i, s[i], i, e[i]);
	}
	
	unsigned long long ir = n-1, il = 0, r = len-1, l = 0; 
	while(r > l){
		if(c[ir] != c[il]) {
			long long l1 = e[il] - l + 1, l2 = r - s[ir] + 1;
			if(l1 == l2) {
				ans += l1;
				ir--, il++;
				r = e[ir], l = s[il];
			} else if(l1 > l2) {
				ans += l2;
				ir--;
				r = e[ir];
				l += l2;
			} else if(l1 < l2) {
				ans += l1;
				il++;
				l = s[il];
				r -= l1;
			}
		} else if(c[ir] == c[il]){
			long long l1 = e[il] - l + 1, l2 = r - s[ir] + 1;
			if(l1 == l2) {
				ir--, il++;
				r = e[ir], l = s[il];
			} else if(l1 > l2) {
				ir--;
				r = e[ir];
				l += l2;
			} else if(l1 < l2) {
				il++;
				l = s[il];
				r -= l1;
			}
		}
	}
	
	cout << ans;
	return 0;
}