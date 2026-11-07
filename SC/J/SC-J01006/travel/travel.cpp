#include<bits/stdc++.h>
using namespace std;
bool check1(string c1,string c2){
	return c1==c2;
}
bool check2(string s1,string s2){
	return s1.substr(0,2)==s2.substr(0,2);
}
bool check3(string s1,string s2){
	char x=s1[2],y=s2[2];
	return ((x=='A'||x=='B'||x=='C')&&(y=='A'||y=='B'||y=='C'))||((x=='D'||x=='F')&&(y=='D'||y=='F'));
}
bool check4(string s1,string s2){
	char x=s1[2],y=s2[2];
	return (x=='A'&&y=='B')||(x=='B'&&(y=='C'||y=='A'))||(x=='C'&&y=='B')||(x=='D'&&y=='F')||(x=='F'&&y=='D');
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(check1(c1,c2)){
		cout<<"1";
		if(check2(s1,s2)){
			cout<<"1";
			if(check3(s1,s2)){
				cout<<"1";
				if(check4(s1,s2)){
					cout<<"1";
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0; 
} 