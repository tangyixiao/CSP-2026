#include<bits/stdc++.h>
using namespace std;
string c[2],s[2],d[2],t;
int main(){
	cin >> c[0] >> s[0] >> c[1] >> s[1];
	if(c[0]==c[1]){
		cout << "1";
	}else{
		cout << "0000" << endl;
		return 0;
	}
	if(s[0][1]==s[1][1]&&s[0][0]==s[1][0]){
		cout << "1"; 
	}else{
		cout << "000" << endl;
		return 0; 
	}
	t=s[0];
	if(t[2]=='A'||t[2]=='B'||t[2]=='C'){
		d[0]="a";
	}else{
		d[0]="b";
	}
	t=s[1];
	if(t[2]=='A'||t[2]=='B'||t[2]=='C'){
		d[1]="a";
	}else{
		d[1]="b";
	}
	if(d[0]==d[1]){
		if(d[0]=="b"){
			cout << "11" << endl;
			return 0;
		}else{
			cout << "1";
		}
	}else{
		cout << "00" << endl;
		return 0;
	}
	string x,y;
	x=s[0];
	y=s[1];
	if(x[2]-y[2]==1||y[2]-x[2]==1){
		cout << "1" << endl;
	}else{
		cout << "0" << endl;
	}
	return 0;
} 
