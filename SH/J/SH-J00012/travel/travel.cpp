#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) cout << 1;
	else cout << 0;
	if (c1 == c2 and s1.substr(0,2) == s2.substr(0,2)) cout << 1;
	else cout << 0;
	if (c1 == c2 and s1.substr(0,2) == s2.substr(0,2) and (s1[2] <= 'C' and s2[2] <= 'C') or (s1[2] >= 'D' and s2[2] >= 'D')) cout << 1;
	else cout << 0;
	if (c1 == c2 and s1.substr(0,2) == s2.substr(0,2) and (s1[2] != 'C' and s2[2] != 'D') and (s1[2] != 'D' and s2[2] != 'C')){
		if (abs(s1[2]-s2[2]) == 1) cout << 1;	
	}
	else cout << 0;
	return 0;
}
