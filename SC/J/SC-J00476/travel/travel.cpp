#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int a[5];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a[1] = 1;
		if (s1[1] == s2[1]) {
			a[2] = 1;
			if (s1[2] < 'D' && s2[2] < 'D') {
				a[3] = 1;
				if (max(s1[2], s2[2]) == min(s1[2], s2[2]) + 1) a[4] = 1;
			}
			else if(s1[2] > 'D' && s2[2] > 'D'){
				a[3]=1;
				a[4]=1;
			}
		}
	} 
	cout << a[1] << a[2] << a[3] << a[4];
	return 0;
}