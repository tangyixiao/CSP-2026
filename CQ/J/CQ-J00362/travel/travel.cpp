/*
脆香米巧克力真好吃
脆香米巧克力真好吃
脆香米巧克力真好吃
脆香米巧克力真好吃
脆香米巧克力真好吃
*/
#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool ans1,ans2,ans3,ans4; 
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	char b2=b[2],d2=d[2];
	if (b2>d2) swap(b2,d2);
	if (a==c) {
		ans1=1;
		if (b[0]==d[0]&&b[1]==d[1]) {
			ans2=1;
			if ((b2=='A'||b2=='B'||b2=='C')&&(d2=='A'||d2=='B'||d2=='C')) {
				ans3=1; 
				if (b2=='A'&&d2=='B') ans4=1;
				if (b2=='B'&&d2=='C') ans4=1;
			}
			if ((b2=='D'||b2=='F')&&(d2=='D'||d2=='F')) {
				ans3=1;
				if (b2=='D'&&d2=='F') ans4=1;
			}
		} 
	}
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}
