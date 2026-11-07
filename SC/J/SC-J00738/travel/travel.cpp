#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a, aa, b, bb;
ll f = 0, ans = 0;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> aa >> b >> bb;
	if(a == b) cout << 1;
	else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if(aa[0] == bb[0] && aa[1] == bb[1]) cout << 1;
	else {
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if((aa[2] == 'F' && bb[2] == 'D') || (aa[2] == 'D' || bb[2] == 'F')) {
		f = 1;
		ans = 1;
	}
	if((aa[2] == 'A' && bb[2] == 'B') || (aa[2] == 'A' && bb[2] == 'C') || (aa[2] == 'B' && bb[2] == 'A') || (aa[2] == 'B' && bb[2] == 'C') || (aa[2] == 'C' && bb[2] == 'A') || (aa[2] == 'C' && bb[2] == 'B')) f = 1;
	if((bb[2] == 'A' && aa[2] == 'B') || (bb[2] == 'A' && aa[2] == 'C') || (bb[2] == 'B' && aa[2] == 'A') || (bb[2] == 'B' && aa[2] == 'C') || (bb[2] == 'C' && aa[2] == 'A') || (bb[2] == 'C' && aa[2] == 'B')) f = 1;
	if(f == 0) {
		cout << 0;
		cout << 0;
		return 0;
	}
	if(f == 1) {
		if(ans == 1) cout << 11;
		else {
			cout << 1;
			if((aa[2] == 'A' && bb[2] == 'B') || (aa[2] == 'B' && bb[2] == 'C')) ans = 1;
			if((bb[2] == 'A' && aa[2] == 'B') || (bb[2] == 'B' && aa[2] == 'C')) ans = 1;
			if(ans == 1) cout << 1;
			if(ans == 0) cout << 0;
		}
	}
	return 0;
}