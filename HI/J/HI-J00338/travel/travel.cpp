#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	string e=""+b[0]+b[1];
	string f=""+d[0]+d[1];
	char g=b[2], h=d[2];
	if(a==c) {
		cout << "1";
		if(e==f && i) {
			cout << "1";
			if((g=='D' && h=='F') || (h=='D' && g=='F') || (g=='A' && h=='B') || (g=='A' && h=='C') || (g=='B' && h=='C') || (h=='A' && g=='B') || (h=='A' && g=='C') || (h=='B' && g=='C')){
				cout << "1";
			}else{
				cout << "0";
			}
			if((g=='D' && h=='F') || (h=='D' && g=='F') || (g=='A' && h=='B') || (g=='B' && h=='C') || (h=='A' && g=='B') || (h=='B' && g=='C')){
				cout << "1";
			}
			else {
				cout << "0";
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
}
