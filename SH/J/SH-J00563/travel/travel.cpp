#include <bits/stdc++.h> 
using namespace std;
string a , b , c , d;
bool lr(string s){
//	cout << s << endl;
	if (s == "A" || s == "B" || s == "C") return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if (a == c){
		cout << 1;
	}else{
		cout << "0000";
		return 0;
	}
	if (b.substr(0,2) == d.substr(0,2)){
		cout << 1;
	}else{
		cout << "000";
		return 0;
	}
	if (lr(b.substr(2,1)) == lr(d.substr(2,1))){
		cout << 1;
	}else{
		cout << "00";
		return 0;
	} 
	if (abs(b[2] - d[2]) == 1){
		cout << 1;
	}else{
		cout << 0; 
	}
	return 0;
}
