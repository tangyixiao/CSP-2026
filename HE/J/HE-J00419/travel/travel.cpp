#include<bits/stdc++.h>
using namespace std;
string x,y,sa,sb;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> x >> sa >> y >> sb;
	int n = (x[0]-'0')*10+x[1]-'0';
	int m = (y[0]-'0')*10+y[1]-'0';
	if(n != m) cout << "0000";
	else {
		cout << 1;
		n = (sa[0]-'0')*10+sa[1]-'0';
		m = (sb[0]-'0')*10+sb[1]-'0';
		if(n != m) cout << "000";
		else {
			cout << 1;
			char a = sa[2],b = sb[2];
			if((a <= 'C'&&b <= 'C') || (a >= 'D'&&b >= 'D')) {
				cout << 1;
				if((a <= 'C'&&b <= 'C') && abs(a-b) == 1) cout << 1;
				else if(a >= 'D'&&b >= 'D') cout << 1;
				else cout << 0;
			}
			else cout << "00";
		}
	}
	return 0;
}
