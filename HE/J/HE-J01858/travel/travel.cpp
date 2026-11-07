#include <bits/stdc++.h>
const int N = 1e6;
using namespace std;
string c1,c2,s1,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << "0000";
		return 0;
	}else{
		cout << '1';
	}
	bool g = 1;
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout << 1;
	else {
		g = 0;
		cout << 0;
	}
	bool a = (s1[2] >= 'A' && s1[2] <= 'C');
	bool b = (s2[2] >= 'A' && s2[2] <= 'C');
	bool c = 1;
	if(a == b && g) cout << 1;
	else {
		cout << 0;
		c = 0;
	}
	if(!c) cout << 0;
	else{
		int u = s1[2];
		int v = s2[2];
		if(abs(u-v) == 1) cout << 1;
		else cout << 0;
	}
	
	
	return 0;
}
