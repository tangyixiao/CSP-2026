#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2,aa,bb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	aa=s1.substr(2,3);
	bb=s2.substr(2,3);
	if(c1==c2){
		cout<<"1";
		if(s1.substr(0,2)==s2.substr(0,2)){
			cout<<"1";
			if(aa=="A"&&bb<="B"){
				cout<<"11";
				return 0;
			}
			if(aa=="A"&&bb<="C"){
				cout<<"10";
				return 0;
			}
			if(aa=="B"&&bb<="A"){
				cout<<"11";
				return 0;
			}
			if(aa=="B"&&bb<="C"){
				cout<<"11";
				return 0;
			}
			if(aa=="C"&&bb<="A"){
				cout<<"10";
				return 0;
			}
			if(aa=="C"&&bb<="B"){
				cout<<"11";
				return 0;
			}
			cout<<"00";
			return 0;
		}
		cout<<"000";
		return 0;
	}
	else {
		cout<<"0000";
		return 0;
	}
}
