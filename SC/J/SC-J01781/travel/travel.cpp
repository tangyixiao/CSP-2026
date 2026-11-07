#include<bits/stdc++.h>
#define LoveCyrene ios :: sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define LoveAnastasya freopen("travel.in", "r", stdin)
#define LoveOdette freopen("travel.out", "w", stdout)
using namespace std;;
//constexpr int N = ;

int lnt(char x){ return x - 'A' + 1; }

void Anastasya(string c1, string s1, string c2, string s2){
	bool a1, a2, a3, a4;
	
	a1 = (c1 == c2);
	a2 = (a1 && s1[0] == s2[0] && s1[1] == s2[1]);
	if(!a2) a3 = 0;
	else{
		if(s1[2] <= 'C' && s2[2] <= 'C') a3 = 1;
		else if(s1[2] >= 'D' && s2[2] >= 'D') a3 = 1;
		else a3 = 0;
	}
	
	if(!a3) a4 = 0;
	else{
		char x = s1[2], y = s2[2];
		if(x > y) swap(x, y);
		if(lnt(y) == lnt(x) + 1 && y != 'D' && x != 'C') a4 = 1;
		else if(y == 'F' && x == 'D') a4 = 1;
		else a4 = 0;
	}
	
	cout << a1 << a2 << a3 << a4;
}

signed main(){
	LoveAnastasya;
	LoveOdette;
	LoveCyrene;
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	Anastasya(c1, s1, c2, s2); 
	return 0;
}
