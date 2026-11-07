#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
string cr,sr,cx,sx;
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> cr >> sr >> cx >> sx;
	if(cr == cx) {
		cout << 1;
	}else{
		cout << "0000";
		return 0;
	}
	if(sr[0] + sr[1] == sx[0] + sx[1]) {
		cout << 1;
	}else{
		cout <<"000";
		return 0;
	}
	if(('A' <= sr[2] && sr[2] <= 'C' && 'A' <= sx[2] && sx[2] <= 'C') || ('D' <= sr[2] && sr[2] <= 'F' && 'D' <= sx[2] && sx[2] <= 'F')) {
		cout << 1;
	}else{
		cout <<"00";
		return 0;
	}
	if(abs(sr[2] - sx[2]) == 1 || (sr[2] == 'D' && sx[2] == 'F') || (sr[2] == 'F' && sx[2] == 'D')) {
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}