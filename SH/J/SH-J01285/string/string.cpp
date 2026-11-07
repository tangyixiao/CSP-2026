#include <bits/stdc++.h>
using namespace std;
unsigned long long n , a , len = 0  , arr2[200005];
char c,arr[200005];
string s;
int main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;++i) {
		cin >> a >> c;
		len += a;
		arr[i] = c;
		arr2[i] = a;
	}
	unsigned long long two_bian = len/2 , dif = 0;
	bool flag_ou_ji = len%2;
	if (!flag_ou_ji) {
		for (int i = 1;i <= n/2;++i) {
			if (arr[i] != arr[n-i+1]) {
				dif+=arr2[i];
			}
		}
		cout << dif;
	}else {
		for (int i = 1;i <= n/2;++i) {
			if (arr[i] != arr[n-i+1]) {
				dif+=arr2[i];
			}
		}
		cout << dif;
	}
	return 0;
}
