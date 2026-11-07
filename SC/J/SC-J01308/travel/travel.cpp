#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans[4];
int l[200];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	l['A'] = l['B'] = l['C'] = 1;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		ans[1] = 1;
	}
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]){
		ans[2] = 1;
	}
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && l[s1[2]] == l[s2[2]]){
		ans[3] = 1;
	}
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && l[s1[2]] == l[s2[2]] && abs(s2[2] - s1[2]) == 1){
		ans[4] = 1;
	}
	cout << ans[1] << ans[2] << ans[3] << ans[4];
	return 0;
}