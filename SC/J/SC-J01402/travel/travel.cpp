#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1, s1, c2, s2;
int v;
int ans[10];
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) ans[0] = 1;
	if(s1[0] == s2[0] && s1[1] == s2[1] && ans[0] == 1) ans[1] = 1;
	if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')) v = 1;
	if(ans[1] == 1 && v == 1) ans[2] = 1;
	int a = abs(s1[2] - s2[2]);
	if(a == 1 && ans[2] == 1) ans[3] = 1;
	for(int i = 0; i < 4; i++){
		cout << ans[i];
	}
	return 0;
}