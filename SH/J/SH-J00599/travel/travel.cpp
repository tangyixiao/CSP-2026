#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	int r1 = (s1[0]-'0')*10+(s1[1]-'0');
	int r2 = (s2[0]-'0')*10+(s2[1]-'0');
	
	// 0->A 1->B 2->C 4->D 5->F
	int x1 = (s1[2] == 'D' ? 4 : s1[2]-'A');
	int x2 = (s2[2] == 'D' ? 4 : s2[2]-'A');
	
	bool ans1 = (c1 == c2);
	bool ans2 = ans1 && (r1 == r2);
	bool ans3 = ans2 && ((x1 < 3 && x2 < 3) || (x1 > 3 && x2 > 3));
	bool ans4 = ans3 && (abs(x1-x2) == 1);
	
	cout << ans1 << ans2 << ans3 << ans4; 
	return 0;
}
