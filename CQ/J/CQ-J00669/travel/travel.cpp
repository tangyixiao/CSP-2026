#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int x, r;
	string xx, rr;
	cin >> x >> xx >> r >> rr;
	if(x == r){cout << 1;
		if(xx[0] == rr[0] && xx[1] == rr[1]){cout << 1;
			if((xx[2] >= 'D' && rr[2] >= 'D') || (xx[2] < 'D' && rr[2] < 'D')){
				cout << 1;
				char s1 = xx[2], s2 = rr[2];
				if(s1 > s2) swap(s1, s2);
				if((s2 <= 'C' && s2 - s1 == 1) || (s1 == 'D' && s2 == 'F')) cout << 1;
				else cout << 0;
			}else cout << "00";
		}else cout << "000";
	}else cout << "0000";
	return 0;
}