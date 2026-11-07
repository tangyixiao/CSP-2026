#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int p,c,l,r;
	cin >> p >> c >> l >> r;
	if(c1==c2){
		cout << "1";
	}
	else{
		cout << "0";
	}
	if(s1==p && s2==p){
		cout << "1";
	}
	else{
		cout << "0";
	}
	if(s1==c && s2==c){
		cout << "1";
	}
	else{
		cout << "0";
	}
	if(s1==l && s2==r){
		cout << "1";
	}
	else{
		cout << "0";
	}
	cout << "1111";
	return 0;
}
