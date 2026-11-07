#include <bits/stdc++.h>
using namespace std;
string a,b,c,d;
int la,lb,sa,sb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if(a != c){
		cout << "0000";
		return 0;
	}else{
		cout << "1";
	}
	if(b[0] == d[0] && b[1] == d[1]){
		cout << 1;
	}else{
		cout << "000";
		return 0;
	}
	if(b[2] == 'A') la = 1;
	else if(b[2] == 'B') la = 1;
	else if(b[2] == 'C') la = 1;
	else if(b[2] == 'D') la = 2;
	else la = 2;
	if(d[2] == 'A') lb = 1;
	else if(d[2] == 'B') lb = 1;
	else if(d[2] == 'C') lb = 1;
	else if(d[2] == 'D') lb = 2;
	else lb = 2;
	if(la == lb) cout << "1";
	else{
		cout << "00";
		return 0;
	}
	if(b[2] == 'F') sa=4;
	else sa = b[2]-'A';
	if(d[2] == 'F') sb=4;
	else sa = d[2]-'A';
	if(abs(sa-sb) == 1) cout << "1";
	else cout << "0";
	return 0;
}
