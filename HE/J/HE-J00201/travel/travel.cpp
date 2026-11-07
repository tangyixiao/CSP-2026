#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool f=true;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<"1";
	else{
	cout<<"0";
	f=false;}
	string a="",b="";
	a=s1[0];
	a+=s1[1];
	b=s2[0];
	b+=s2[1];
	if(c1==c2&&a==b) cout<<"1";
	else{
	cout<<"0";
	f=false;}
	char n,m;
	n=s1[2];
	m=s2[2];
	if(c1==c2&&a==b&&(n>='A'&&n<='C'&&m>='A'&&m<='C'||n>='D'&&n<='F'&&m>='D'&&m<='D')){
	cout<<"1";}
	else{
	cout<<"0";
	f=false;}
	if(f==true&&(n=='A'&&m=='B'||n=='B'&&m=='A'||n=='B'&&m=='C'||n=='C'&&m=='B'||n=='D'&&m=='F'||n=='F'&&m=='D')){
	cout<<"1";}
	else cout<<"0";
	return 0;}
