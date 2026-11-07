#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << 0 << 0 << 0 << 0;
		return 0;
	}else{
		cout << 1;
		string x,y;
		x += (s1[0] + s1[1]),y += (s2[0] + s2[1]);
		if(x != y){
			cout << 0 << 0 << 0;
			return 0;
		}else{
			cout << 1;
			char a,b;
			a = s1[2];
			b = s2[2];
			if(a>='A' && a<='C' && b>='A' && b<='C' || (a=='D' || a=='F') && (b=='D' || b=='F')){
				cout << 1;
				if(abs(a - b) == 1){
					cout << 1;
					return 0;
				}else{
					cout << 0;
				}
			}else{
				cout << 0 << 0;
				return 0;
			}
		}
	}
	
	return 0;
}
