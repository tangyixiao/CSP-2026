#include <iostream>
using namespace std;

int c1, c2;
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 != c2) printf("0000\n");
	else if (s1[0] != s2[0] || s1[1] != s2[1]) printf("1000\n");
	else if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'D' && s2[2] <= 'F'|| s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'A' && s2[2] <= 'C' ) printf("1100\n");
	else if (s1[2] == 'A' && s2[2] != 'B' || s1[2] == 'B' && s2[2] != 'A' && s2[2] != 'C' || s1[2] == 'C' && s2[2] != 'B' ||
		     s1[2] == 'D' && s2[2] != 'F' || s1[2] == 'F' && s2[2] != 'D') printf("1110\n");
	else printf("1111\n");
	
	return 0;
}