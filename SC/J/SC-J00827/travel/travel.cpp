#include <bits/stdc++.h>
#define int long long


using namespace std;

string c1, s1, c2, s2, ans;

signed main () {
	
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2) ans[0]='1';
	else ans[0]='0';//1
	
	if (s1[0]==s2[0] && s1[1]==s2[1] && ans[0]==1) ans[1]='1';
	else ans[1]='0';//2
	
	if (s1[0]==s2[0] && s1[1]==s2[1] && ans[0]==1) {
		if ((s1[2]=='F' && s2[2]=='D') || (s1[2]=='D' && s2[2]=='F')) {
			ans[2]='1';
		} else {
			if (s1[2]=='F' || s2[2]=='F' || s1[2]=='D' || s2[2]=='D') {
				ans[2]='0';
			} else ans[2]='1';
		}
	} else ans[2]='0';//3
	
	if (ans[0]=='1' && ans[1]=='1' && ans[2]=='1') {
		if ((s1[2]=='F' && s2[2]=='D') || (s1[2]=='D' && s2[2]=='F')) {
			ans[3]='1';
		} else {
			if (abs (s1[2]-s2[2])==1) ans[3]='1';
			else ans[3]='0';
		}
	} else ans[3]='0';//4
	for (int i=0; i<4; i++) cout<<ans[i];
	
	return 0;
}//T1