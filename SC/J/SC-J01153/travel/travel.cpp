#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string rc,rs,xc,xs;
	cin>>rc>>rs>>xc>>xs;
	int a[5]={0,0,0,0,0};
	if(rc==xc) a[0]=1;
	else {cout<<"0000";return 0;}
	if(rs.substr(1,2)==xs.substr(1,2)){
		a[1]=1;
		if(rs.substr(3,3)=="A"&&rs.substr(3,3)=="B") {a[2]=1;a[3]=1;}
		else if(rs.substr(3,3)=="B"&&rs.substr(3,3)=="A") {a[2]=1;a[3]=1;}
		else if(rs.substr(3,3)=="A"&&rs.substr(3,3)=="C") {a[2]=1;}
		else if(rs.substr(3,3)=="C"&&rs.substr(3,3)=="A") {a[2]=1;}
		else if(rs.substr(3,3)=="B"&&rs.substr(3,3)=="C") {a[2]=1;a[3]=1;}
		else if(rs.substr(3,3)=="C"&&rs.substr(3,3)=="B") {a[2]=1;a[3]=1;}
		else if(rs.substr(3,3)=="F"&&rs.substr(3,3)=="D") {a[2]=1;a[3]=1;}
		else if(rs.substr(3,3)=="D"&&rs.substr(3,3)=="F") {a[2]=1;a[3]=1;}
		else {cout<<"1100";return 0;}
	}
	else {cout<<"1000";return 0;}
	cout<<a[0]<<a[1]<<a[2]<<a[3];
	return 0;
}
