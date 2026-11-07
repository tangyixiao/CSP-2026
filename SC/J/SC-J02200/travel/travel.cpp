#include<bits/stdc++.h>
using namespace std;
char a,b,c='0',d='0';
string s1,s2,j;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,z1,c2,z2;
	cin>>c1>>z1>>c2>>z2;
	
	if(c1==c2){
		a='1';
	}
	else{
		a='0';
	}
	
	s1=z1[0];
	s1=s1+z1[1];
	s2=z2[0];
	s2=s2+z2[1];
	if(c1==c2&&s1==s2){
		b='1';
	}
	else{
		b='0';
	}
	
	if(c1==c2&&s1==s2){
		if((z1[2]=='A'||z1[2]=='B'||z1[2]=='C')&&(z2[2]=='A'||z2[2]=='B'||z2[2]=='C')){
			c='1';
		}
		if((z1[2]=='D'||z1[2]=='F')&&(z2[2]=='D'||z2[2]=='F')){
			c='0';
		}
	}
	
	if(c=='1'){
		if((z1[2]=='A'&&z2[2]=='B')||(z2[2]=='A'&&z1[2]=='B')||(z1[2]=='B'&&z2[2]=='C')||(z2[2]=='B'&&z1[2]=='C')||(z1[2]=='D'&&z2[2]=='F')||(z2[2]=='D'&&z1[2]=='F')){
			d='1';
		}
	}
	j=j+a+b+c+d;
	cout<<j;
	return 0;
} 