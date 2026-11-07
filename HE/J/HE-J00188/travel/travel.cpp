#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool p1,p2,p3,p4;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		printf("1");
		p1 = 1;
	}
	else printf("0");
	string x1 = "",x2 = "";
	x1 += s1[0];
	x1 += s1[1];
	x2 += s2[0];
	x2 += s2[1];
	if (x1 == x2 && p1) {
		printf("1");
		p2 = 1;
	}
	else printf("0");
	if (((s1[2] >= 'D' && s2[2] >= 'D') || (s1[2] <= 'C' && s2[2] <='C'))&& p2 ) {
		printf("1");
		p3 = 1;
	}
	else printf("0");
	if (abs(s1[2] - s2[2]) == 1 && p3) printf("1");
	else printf("0");
	return 0;
}
