#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int u = 1;
	cin >> a >> b >> c >> d;
	
	if(a == c)cout << 1;
	else {cout << 0;u = 0;
	}
	if(u == 1){
		if(b[0] == d[0]&&b[1] == d[1])cout << 1;
		else {
			cout << 0;
			u = 0;
		}
	}
	else cout << 0;
	if(u == 1){
		int x = (int)(b[2]-'A');
		int y = (int)(d[2]-'A');
		if(x+1 == y&&b[2]!='C')cout << 1;
		else if(x-1 == y&&b[2]!='D')cout << 1;
		else if(x+2 == y&&b[2] != 'B'&&b[2] != 'C'){
			cout <<1;
			u = 0;
		}
		else if(x-2 == y&&b[2] != 'D'&&b[2] != 'D'){
			cout << 1;
			u = 0;
		}
		else {
			cout << 0;
			u = 0;
		}
	}
	else cout << 0;
	if(u == 1)cout << 1;
	else cout << 0;
	return 0;
}
