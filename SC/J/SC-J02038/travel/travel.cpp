#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","W",stdout);
	int a,b;
	string s1,s2;
	cin >> a >> s1 >> b >> s2;
	cout << (a == b);
	int x1 = (s1[0] - '0') * 10 + s1[1] - '0';
	int x2 = (s2[0] - '0') * 10 + s2[1] - '0';
	cout << (x1 == x2 && a == b);
	if(a == b && x1 == x2 && (s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D'))
		cout << 1;
	else
		cout << 0;
	if(a == b && x1 == x2 && (abs(s1[2] - s2[2]) == 1 && !(s1[2] == 'C' && s2[2] == 'D' || s1[2] == 'D' && s2[2] == 'C')) || (s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F'))
		cout << 1;
	else
		cout << 0;
	return 0;
} 