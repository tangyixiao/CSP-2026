#include<bits/stdc++.h>
using namespace std;
string s1,c1,s2,c2;
char a,b;
int c,d,e,f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=s1[2];
	b=s2[2];
	if('A'<=a&&a<='C')c=1;
	else c=2;
	if('A'<=b&&b<='C')d=1;
	else d=2;
	e=a-'A';
	f=b-'A';
	if(c1==c2){
		cout<<'1';
	}
	else {
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<'1';
	}
	else {
		cout<<"000";
		return 0;
	}
	if(c==d){
		cout<<'1';
	}
	else {
		cout<<"00";
		return 0;
	}
	if(abs(e-f)==1){
		cout<<'1';
		return 0;
	}
	else {
		cout<<"0";
		return 0;
	}
	return 0;
}