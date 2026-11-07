# include <bits/stdc++.h>
# define int long long
# define endl "\n"
using namespace std;

inline bool place(char x){
	if('A' <= x && x <= 'C') return 1;
	return 0;
}

inline bool bes(char x, char y){
	if(place(x) && place(y)){
		return abs(x - y) == 1;
	}
	
	if(x == 'D' && y == 'F') return true;
	if(x == 'F' && y == 'D') return true;
	
	return false;
}

signed main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	bool f1, f2, f3, f4, samep;
	f1 = (c1 == c2);

	f2 = (f1 && s1[0] == s2[0] && s1[1] == s2[1]);

	samep = (place(s1[2]) == place(s2[2]));

	f3 = (f2 && samep);
	
	f4 = (f3 && bes(s1[2], s2[2]));

	cout << f1 << f2 << f3 << f4 << endl;
	
	return 0;
}
