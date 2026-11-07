#include<bits/stdc++.h>

using namespace std;

string aa = "", bb = "";
string c = "", d = "";

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> aa >> c >> bb >> d;
	int a = 0, b = 0;
	a = ((aa[0] - '0') * 10 + (aa[1] - '0'));
	b = ((bb[0] - '0') * 10 + (bb[1] - '0'));
	if (a == b) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	int a1 = 0, b1 = 0;
	a1 = (c[0] - '0') * 10 + (c[1] - '0');
	b1 = (d[0] - '0') * 10 + (d[1] - '0');
	if (a1 == b1){
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	char c1, d1; int tag1  = -1, tag2 = -1;
	c1 = c[2];
	d1 = d[2];
	if (c1 == 'A' || c1 == 'B' || c1 == 'C'){
		tag1 = 1;
	} else {
		tag1 = 0;
	}
	if (d1 == 'A' || d1 == 'B' || d1 == 'C'){
		tag2 = 1;
	} else {
		tag2 = 0;
	}
	if (tag1 == tag2){
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if (tag1 == 0){
		cout << 1;
		return 0;
	}
	if ((c1 == 'A' && d1 == 'B') || (c1 == 'B' && d1 == 'C') || (c1 == 'B' && d1 == 'A') || (c1 == 'C' && d1 == 'B')){
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
