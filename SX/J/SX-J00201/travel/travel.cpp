#include<bits/stdc++.h>
using namespace std;
string s = "ABCRRRRRRRRRRRRRRRRDEF";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a == c){
		cout << 1;
	}
	else{
		cout << "0000";
		return 0;
	}
	string e = b.substr(0,2),f = d.substr(0,2);
	if(e==f){
		cout << 1;
	}else{
		cout << "000";
		return 0;

	}
	e = b.substr(2,1),f=d.substr(2,1);
	int m = s.find(e),n = s.find(f);
	if(abs(m-n) <=2)cout<<1;
	else{
		 cout << "00";
		 return 0;
	}if(abs(m-n) == 1){
		cout << 1;

	}else cout << 0;
		return 0;
}