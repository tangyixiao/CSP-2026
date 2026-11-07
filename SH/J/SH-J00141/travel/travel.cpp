#include <bits/stdc++.h>
using namespace std;
bool aside(char xx,char yy){
	if((xx=='A')&&((yy=='B')||(yy=='C'))) return 1;
	if((xx=='B')&&((yy=='A')||(yy=='C'))) return 1;
	if((xx=='C')&&((yy=='B')||(yy=='A'))) return 1;
	if((xx=='D')&&(yy=='F')) return 1;
	if((xx=='F')&&(yy=='D')) return 1;
	return 0;
}
bool neighbour(char xx,char yy){
	if((xx=='A')&&(yy=='B')) return 1;
	if((xx=='B')&&((yy=='A')||(yy=='C'))) return 1;
	if((xx=='C')&&(yy=='B')) return 1;
	if((xx=='D')&&(yy=='F')) return 1;
	if((xx=='F')&&(yy=='D')) return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a==c){
		cout << 1;
	}else{
		cout << "0000";
		return 0;
	}
	if(b.substr(0,2)==d.substr(0,2)){
		cout << 1;
	}else{
		cout <<"000";
		return 0;
	}
	if(aside(b[2],d[2])){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	}
	if(neighbour(b[2],d[2])){
		cout << 1;
	}else{
		cout <<'0';
		return 0;
	}
	return 0;
} 
