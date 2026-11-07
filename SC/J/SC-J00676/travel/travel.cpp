#include <bits/stdc++.h>
using namespace std;
int a,b,c,f;
char d,j;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=c1[0]*10+c1[1],b=c2[0]*10+c2[1];
	if(a!=b){cout<<"0000";return 0;}
	cout<<"1";
	c=s1[0]*10+s1[1],f=s2[0]*10+s2[1];
	if(c!=f){cout<<"000";return 0;}
	cout<<"1";
	d=s1[2],j=s2[2];
	if(d=='D'&&j=='F'){cout<<"11";return 0;}
	if(d=='F'&&j=='D'){cout<<"11";return 0;}
	if(d=='A'){
		if(j=='B'){cout<<"11";return 0;}
		else if(j=='C'){cout<<"10";return 0;}
		else {cout<<"00";return 0;}
	}
	if(d=='B'){
		if(j=='A'||j=='C'){cout<<"11";return 0;}		
		else {cout<<"00";return 0;}
	}
	if(d=='C'){
		if(j=='B'){cout<<"11";return 0;}
		else if(j=='A'){cout<<"10";return 0;}
		else {cout<<"00";return 0;}
	}
	return 0;
} 