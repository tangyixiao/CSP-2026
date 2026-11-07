#include<bits/stdc++.h>
using namespace std;

bool sid(char c1){
	return (c1 == 'A') || (c1 == 'B') || (c1 == 'C');
}
bool nxto(char c1, char c2){
	return (c1 == 'A' && c2 == 'B') || (c1 == 'C' && c2 == 'B') || (c1 == 'D' && c2 == 'F');
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2, r1, r2;
	char s1, s2;
	cin >> c1 >> r1 >> s1 >> c2 >> r2 >> s2;
	cout << (c1 == c2) ? ('1') : ('0');
	cout << (r1 == r2 && c1 == c2) ? ('1') : ('0');
	cout << (sid(s1) == sid(s2) && r1 == r2 && c1 == c2) ? ('1') : ('0');
	cout << (nxto(s1, s2) || nxto(s2, s1) && sid(s1) == sid(s2) && r1 == r2 && c1 == c2) ? ('1') : ('0');
	return 0;
} 
