#include <bits/stdc++.h>
using namespace std;
string bx1,bx2,st1,st2;
bool check_row(string s1,string s2) {
	return s1[0]==s2[0]&&s1[1]==s2[1];
}
bool check_seat(string s1,string s2) {
	char t1=s1[2],t2=s2[2];
	if(t2<t1) swap(t1,t2);
	if(t2=='C'||t2=='B') {
		return 1;
	} else if(t2=='E') {
		return t1=='D';
	} 
	return 0;
}
bool check_near(string s1,string s2) {
	char t1=s1[2],t2=s2[2];
	if(t2<t1) swap(t1,t2);
	if(t1=='A'&&t2=='B'||t1=='B'&&t2=='C'||t1=='D'&&t2=='E') return 1;
	return 0;
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>bx1>>st1>>bx2>>st2;
	if(bx1==bx2) {
		cout<<"1";
	} else {
		cout<<"0000";
		return 0;
	}
	
	if(check_row(st1,st2)) {
		cout<<"1";
	} else {
		cout<<"000";
		return 0;
	}
	
	if(check_seat(st1,st2)) {
		cout<<"1";
	} else {
		cout<<"00";
		return 0;
	}
	
	if(check_near(st1,st2)) {
		cout<<"1";
	} else {
		cout<<"0";
		return 0;
	}
	return 0;
} 
