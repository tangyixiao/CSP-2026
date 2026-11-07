#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 0x3f3f3f3f3f3f3f3f;
string c1, c2, c3, c4;
int line(char c){
	if(c == 'A') return 1;
	if(c == 'B') return 2;
	if(c == 'C') return 3;
	if(c == 'D') return 5;
	if(c == 'F') return 6;
}
void Solve(int Case){
	cin >> c1 >> c2 >> c3 >> c4;
	cout << (c1 == c3);
	cout << ((c1 == c3) && (c2.substr(0, 2) == c4.substr(0, 2)));
	cout << ((c1 == c3) && (c2.substr(0, 2) == c4.substr(0, 2)) && ((line(c2[2]) <= 3 && line(c4[2]) <= 3) || (line(c2[2]) >= 5 && line(c4[2]) >= 5)));
	cout << ((c1 == c3) && (c2.substr(0, 2) == c4.substr(0, 2)) && abs(line(c2[2]) - line(c4[2])) == 1);
}
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	// cin >> t;
	for(int i = 1; i <= t; i ++){
		Solve(i);
	}
	return 0;
}
