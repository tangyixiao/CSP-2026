#include<bits/stdc++.h>
using namespace std;

int main() {

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int m, n;
	cin >> m >> n;
	int a[m];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	sort(a, a + m);
	string s[m];
	if (n == 1) {
		string c, s2;
		int a2 = a[m-1];
		int l = 0;
		while (a2) {
			c[l] = char(char (a2%2)+'0');
			l++;
			a2 /= 2;
		}
		int l2 = c.length();
		for (int i = 0; i < l2; i++) {
			s2[i] = c[l2 - i];
		}
	
		cout << s2;
		return 0;
	}
	


	return 0;
}
