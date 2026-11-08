#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << "1";
	}
	else{
		cout << "0";
	}
	if(s1-'A'&&s1-'B'&&s1-'C'&&s1-'F'==s2-'A'&&s2-'B'&&s2-'C'&&s2-'F'){
		cout << "1";
	}
	else{
		cout << "0";
	}
	if(s1==s2){
		cout << "1";
	}
	else{
		cout << "0";
	}
	if(c1==c2||s1==s2){
		cout << "1";
	}
	else{
		cout << "0";
	}
	return 0;
}}


