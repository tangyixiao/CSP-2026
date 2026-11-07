#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c1, s1, c2, s2, cnt1 = "", cnt2 = "";
char cnt3, cnt4;
string ans = "";
int cnt5, cnt6;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	cnt1 += s1[0];
	cnt1 += s1[1];
	cnt2 += s2[0];
	cnt2 += s2[1];
	cnt3 = s1[2];
	cnt4 = s2[2];
	if (cnt3 >= 'A' && cnt3 <= 'C')cnt5 = 1;
	if (cnt4 >= 'A' && cnt4 <= 'C')cnt6 = 1;
	if (c1 == c2)ans += '1';
	else ans += '0';
	if (c1 == c2 && cnt1 == cnt2)ans += '1';
	else ans += '0';
	if (c1 == c2 && cnt1 == cnt2 && cnt5 == cnt6)ans += '1';
	else ans += '0';
	if (c1 == c2 && cnt1 == cnt2 && cnt5 == cnt6){
		if(abs(cnt3-cnt4)==1)ans+='1';
		else ans += '0';
	}
	else ans += '0';
	cout << ans;
	return 0;
}