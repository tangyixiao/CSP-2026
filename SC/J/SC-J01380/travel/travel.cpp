#include<bits/stdc++.h>
using namespace std;
char c11,c12,s11,s12,s13;
char c21,c22,s21,s22,s23;
int c1,s1,c2,s2,n1,n2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c11>>c12;
	cin>>s11>>s12>>s13;
	cin>>c21>>c22;
	cin>>s21>>s22>>s23;
	c1=int(c11-'0')*10+int(c12-'0');
	c2=int(c21-'0')*10+int(c22-'0');
	s1=int(s11-'0')*10+int(s12-'0');
	s2=int(s21-'0')*10+int(s22-'0');
	if(s13=='A'){
		n1=1;
	}
	if(s13=='B'){
		n1=2;
	}
	if(s13=='C'){
		n1=3;
	}
	if(s13=='D'){
		n1=4;
	}
	if(s13=='E'){
		n1=5;
	}
	if(s23=='A'){
		n2=1;
	}
	if(s23=='B'){
		n2=2;
	}
	if(s23=='C'){
		n2=3;
	}
	if(s23=='D'){
		n2=4;
	}
	if(s23=='E'){
		n2=5;
	}
	if(c1!=c2){
		cout<<"0000";
	}
	else if(s1!=s2){
		cout<<"1000";
	}
	else if(n1<=3 && n2>3){
		cout<<"1100";
	}
	else if(n1>3 && n2<=3){
		cout<<"1100";
	}
	else if(n1==n2+1){
		cout<<"1111";
	}
	else if(n2==n1+1){
		cout<<"1111";
	}
	else{
		cout<<"1110";
	}
	return 0;
} 