#include<bits/stdc++.h>
using namespace std;
//int t;
string aa,ab,ba,bb;
int w,x,y,z;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
//	cin >> t;
//	while (t--) {
		
	cin >> aa >> ab >> ba >> bb;
	if (aa == ba) {
		w = 1;
		if (ab[0]==bb[0] && ab[1]==bb[1]) {
			x = 1;
			char ac = ab[2];
			char bc = bb[2];
			if (ac > bc) swap(ac,bc);
			if ((ac=='A'&&bc=='B') || (ac=='B'&&bc=='C') || (ac=='D'&&bc=='F')) {
				y = 1;
				z = 1;
			} else if (ac=='A'&&bc=='C') y = 1;
			else;
		}
	}
	cout << w << x << y << z;
	
//	}
	
	return 0;
}
