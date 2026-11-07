#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	int c1, c2;
	string s1, s2;
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	int p1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int p2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	
	int seat1 = s1[2], seat2 = s2[2];
	
	cout << (c1 == c2 ? 1 : 0);
	cout << (c1 == c2 && p1 == p2 ? 1 : 0);
	cout << (c1 == c2 && p1 == p2 && 
			((seat1 <= 'C' && seat2 <= 'C') || 
			(seat1 >= 'D' && seat2 >= 'D')) ? 1 : 0);
	cout << ((c1 == c2 && p1 == p2 && 
			((seat1 <= 'C' && seat2 <= 'C') || 
			(seat1 >= 'D' && seat2 >= 'D')) && 
			(abs(seat1 - seat2) == 1 || (seat1 == 'D' && seat2 == 'F') ||
			(seat1 == 'F' && seat2 == 'D'))) ? 1 : 0);
	
	return 0;
}
