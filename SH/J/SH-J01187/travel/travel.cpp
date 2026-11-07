#include <bits/stdc++.h>
#define int long long
using namespace std;

string c1, s1, c2, s2;
 
signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	bool q1 = (c1 == c2);
	string r1 = s1.substr(0, 2);
	string r2 = s2.substr(0, 2);
	bool q2 = (r1 == r2)&&q1;
	bool q3 = ((s1[2] <= 'C' && s2[2] <= 'C')||(s1[2] >= 'D' && s2[2] >= 'D'))&&q2;
	bool q4 = ((s1[2]-s2[2]==1)||(s1[2]-s2[2]==-1))	&&q3;
	cout <<q1<<q2<<q3<<q4;
}

