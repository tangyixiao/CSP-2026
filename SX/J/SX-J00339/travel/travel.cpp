#include <bits/stdc++.h>
using namespace std;
string dc, ds, sc, ss;
int cnt1, cnt2, q1, q2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> dc >> ds >> sc >> ss;
	//≈–∂œ≥µœ·
	if (dc == sc)
		cout << 1;
	else
		cout << 0;
	//≈–∂œ≈≈ ˝
	for (int i = 0; i < 2; i++) {
		cnt1 = cnt1 * 10 + ds[i] - '0';
		cnt2 = cnt2 * 10 + ss[i] - '0';
	}
	if (dc == sc && cnt1 == cnt2)
		cout << 1;
	else
		cout << 0;
	//≈–∂œÕ¨≤‡
	q1 = int(ds[2]);
	q2 = int(ss[2]);
	if (dc == sc && cnt1 == cnt2 && ds[2] <= 'C' && ss[2] <= 'C')
		cout << 1;
	else if (dc == sc && cnt1 == cnt2 && ds[2] > 'C' && ss[2] > 'C')
		cout << 1;
	else
		cout << 0;
	//≈–∂œœ‡¡⁄
	if (q1 == 67 && q2 == 68)
		cout << 0;
	else if ((dc == sc && cnt1 == cnt2 && q1 + 1 == q2) || (dc == sc && cnt1 == cnt2 && q2 + 1 == q1))
		cout << 1;
	else
		cout << 0;
	//cout << "\n" << cnt1 << " " << cnt2 << " " << q1 << " " << q2 << " ";
	return 0;
}
// 03 02C 02 02D