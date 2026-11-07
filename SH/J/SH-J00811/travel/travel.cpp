#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	bool c1,c2,c3,c4;
	cin >> a1 >> a2 >> b1 >> b2;
	c1 = (a1 == b1);
	c2 = c1 && (a2.substr(0,2) == b2.substr(0,2));
	if (c2 && (a2[2] >= 'A' && a2[2] <= 'C') && (b2[2] >= 'A' && b2[2] <= 'C')){
		c3 = 1;
	}
	else if (c2 && (a2[2] >= 'D' && a2[2] <= 'F') && (b2[2] >= 'D' && b2[2] <= 'F')){
		c3 = 1;
	}
	else c3 = 0;
	if ((a2[2] - b2[2] == 1 || a2[2] - b2[2] == -1 )&& c3){
		c4 = 1;
	}
	else c4 = 0;
	cout << c1 << c2 << c3 << c4;
	return 0;
} 
