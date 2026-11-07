#include <bits/stdc++.h>
using namespace std;

int n;

long long a[200005];
long long total,mid;

char c[200005];

long long ans;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		total += a[i];
	}
	if (total % 2 != 0) {
		mid = (total + 1) / 2;
	}
	else {
		mid = total / 2;
	}
	long long cur = 0, il = 1, ir = n;
	//如果两边的字符一样，a那么就要相减直至出现不同 
	//il,ir指向目前访问的字符串下标，cur指向目前字符串中的字符个数（正着数） 
	while (cur < mid) {
		if (c[il] == c[ir]) {
			while (c[il] == c[ir] && cur < mid) {
				if (a[il] > a[ir]) {
					a[il] -= a[ir]; //如aabba中，第一次进行本操作时，指针指向第二个a 和 倒数第二个b 
					cur += a[ir];
					ir--;
				}
				else if (a[il] < a[ir]) {
					a[ir] -= a[il];
					cur += a[il];
					il++;
				}
				else {
					cur += a[ir];
					il++;
					ir--;
				}
			}
			continue;
		}
		if (a[il] > a[ir]) { // aaabbcc，目前指针指向第一个a和最后一个c 
			a[il] -= a[ir]; //目前指针指向第三个a，和倒数第三个b
			if (cur + a[ir] >= mid) {
				ans += mid - cur - 1;
				break;
			}
			ans += a[ir];
			//cout << a[ir] << endl;
			cur += a[ir];
			ir--; 
		}
		else if (a[il] < a[ir]) {
			a[ir] -= a[il];
			if (cur + a[il] >= mid) {
				ans += mid - cur - 1;
				break;
			}
			ans += a[il];
			//cout << a[il] << endl;
			cur += a[il];
			il++;
		}
		else if (a[il] == a[ir]) {
			if (cur + a[ir] >= mid) {
				ans += mid - cur - 1;
				break;
			}
			ans += a[il];
			cur += a[il];
			il++;
			ir--;
		} 
	}
	cout << ans << endl;
	return 0;
}
