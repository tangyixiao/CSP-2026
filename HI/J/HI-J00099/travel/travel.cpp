#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c1 >> s2;
	bool t = 0;
	if(c1 == c2){
		t = 1;
		cout << t;
	}
	else{
		t = 0;
		cout << 0;
	}
	if(s1[0] == s2[0]){
		t = 1;
		cout << t;
	}
	else{
		t = 0;
		cout << t;
	}
	if(s1[1] == s2[1]){
		t = 1;
		cout << t;
	}
	else{
		t = 0;
		cout << t;
	}
	if(s1[2] == 'B' && s2[2] == 'A' || s1[2] == 'A' && s2[2] == 'B'){
		t = 1;
		cout  << t;
	}
	else if(s1[2] == 'F' && s2[2] == 'D'|| s1[2] == 'D' && s2[2] == 'F'){
		t = 1;
		cout << t;
	}
	else{
		t = 0;
		cout << t;
	}
	return 0;
}
