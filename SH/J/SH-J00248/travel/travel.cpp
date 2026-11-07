#include<bits/stdc++.h>
using namespace std;
int c1, c2, row1, row2;
char col1, col2;
string s1, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	row1 = (int)((s1[0] - '0') * 10 + s1[1] - '0');
	row2 = (int)((s2[0] - '0') * 10 + s2[1] - '0');
	col1 = s1[2];
	col2 = s2[2];
	
	if(c1 != c2) cout << "0000";
	else if(row1 != row2) cout << "1000";
	else if(
		(col1 == 'A' and col2 == 'D') or
		(col1 == 'D' and col2 == 'A') or
		(col1 == 'A' and col2 == 'F') or
		(col1 == 'F' and col2 == 'A') or
		
		(col1 == 'B' and col2 == 'D') or
		(col1 == 'D' and col2 == 'B') or
		(col1 == 'B' and col2 == 'F') or
		(col1 == 'F' and col2 == 'B') or
		
		(col1 == 'C' and col2 == 'D') or
		(col1 == 'D' and col2 == 'C') or
		(col1 == 'C' and col2 == 'F') or
		(col1 == 'F' and col2 == 'C')
	) cout << "1100";
	else if((col1 == 'A' and col2 == 'C') or (col1 == 'C' and col2 == 'A')) cout << "1110";
	else cout << "1111";
	
	return 0;
} 
