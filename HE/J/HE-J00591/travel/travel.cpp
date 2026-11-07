#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a>> b >> c >> d;
	if(a != c){
		cout << "0000";
	}else if(b.substr(0,2) != d.substr(0,2)){
		cout << "1000";
	}else if('A' <= b[2] && b[2] <= 'C' && 'A' <= d[2] && d[2] <= 'C' || (b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')){
		if(abs(b[2] - d[2]) == 1) cout << "1111";
		else if(b[2] == 'D' || d[2] == 'D'){
			cout << "1111";
		}else cout << "1110";
	}else cout << "1100";
	return 0;
}
