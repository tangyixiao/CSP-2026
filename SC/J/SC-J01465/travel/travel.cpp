#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string a, aa, b, bb;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> a >> aa >> b >> bb;
	if (a != b) return cout << "0000", 0;
	cout << "1";
	// 1
	if (aa[0] + aa[1] == bb[0] + bb[1]) cout << "1";
	else return cout << "000", 0;
	//2
	if ((aa[2] <= 'C' && bb[2] <= 'C') || ((aa[2] >= 'D' && aa[2] <= 'F') && (bb[2] >= 'D' && bb[2] <= 'F'))) cout << "1";
	else return cout << "00", 0;
	//3
	if (abs(aa[2] - bb[2]) == 1) cout << "1";
	else cout << "0";
	//4
	return 0;
}