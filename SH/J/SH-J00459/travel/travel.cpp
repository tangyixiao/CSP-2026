#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
bool o(){
	if(s1[2]=='A'&&(s2[2]=='B'||s2[2]=='C')) return 1;
	if(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C')) return 1;
	if(s1[2]=='C'&&(s2[2]=='A'||s2[2]=='B')) return 1;
	if(s1[2]=='D'&&s2[2]=='F') return 1;
	if(s1[2]=='F'&&s1[2]=='D') return 1;
	return 0;
} 
bool b(){
	char x=s1[2],y=s2[2];
	if(x=='F'&&y=='D')	return 1;
	if(x=='D'&&y=='F')	return 1;
	if(x=='A'&&y=='B')	return 1;
	if(x=='B'&&(y=='A'||y=='C'))	return 1;
	if(x=='C'&&y=='B')	return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)	cout<<"1";
	else	cout<<"0";
	string k1="",k2="";
	k1+=s1[0]+s1[1];
	k2+=s2[0]+s2[1];
	if(c1==c2&&k1==k2)	cout<<"1";
	else	cout<<"0";
	if(c1==c2&&k1==k2&&o()==1)	cout<<"1";
	else	cout<<"0";
	if(c1==c2&&k1==k2&&o()==1&&b()==1)	cout<<"1";
	else	cout<<"0";
	return 0;
} 
