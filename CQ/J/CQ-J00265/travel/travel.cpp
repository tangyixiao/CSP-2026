#include<bits/stdc++.h>
using namespace std;
string p_a, p_b, id_a, id_b;
long long pa, pb, ida1, idb1;
char ida2, idb2;
int ans[4];
int main(){
	ios::sync_with_stdio(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> p_a >> id_a >> p_b >> id_b;
	pa = (p_a[0] - '0') * 10 + (p_a[1] - '0');
	pb = (p_b[0] - '0') * 10 + (p_b[1] - '0');
	ida1 = (id_a[0] - '0') * 10 + (id_a[1] - '0');
	idb1 = (id_b[0] - '0') * 10 + (id_b[1] - '0');
	ida2 = id_a[2];
	idb2 = id_b[2];
	if (pa == pb) {
		ans[0] = 1;
		if (ida1 == idb1) {
			ans[1] = 1;
			if ((ida2 <= 'C' && idb2 <= 'C') || (ida2 > 'C' && idb2 > 'C')) {
				ans[2] = 1;
				cout << abs(ida2 - idb2) << endl;
				if (abs(ida2 - idb2) == 1) {
					ans[3] = 1;
				}
			}
		}
	}
	cout << ans[0] << ans[1] << ans[2] << ans[3];
	return 0;
}

