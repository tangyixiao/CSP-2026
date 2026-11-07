#include <bits/stdc++.h>
using namespace std;

int c1, c2;
string s1, s2;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		if(s1.substr(0, 2) == s2.substr(0, 2)){
			char tmp1 = s1[2], tmp2 = s2[2];
			if((tmp1>='A'&&tmp1<='C'&&tmp2>='A'&&tmp2<='C') || (tmp1>='D'&&tmp1<='F'&&tmp2>='D'&&tmp2<='F')){
				if(abs(tmp1-tmp2) == 1) cout << "1111";
				else cout << "1110";
			}
			else cout << "1100";
		}
		else cout << "1000";
	}
	else cout << "0000";
	return 0;
}