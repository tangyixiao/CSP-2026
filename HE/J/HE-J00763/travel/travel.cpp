#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c_1,s_1,c_2,s_2;
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	if(c_1 == c_2){
		cout << 1;
		if(s_1.substr(0,2) == s_2.substr(0,2)){
			cout << 1;
			char x = s_1[2] , y = s_2[2];
			if(('A'<=x && x<='C') && ('A'<=y && y<='C')){
				cout << 1;
				if(x+1==y) cout <<1;
				else cout << 0;
			}
			else if(('D'==x || x=='F') && ('D'==y || y=='F')){
				cout << "11";
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}
