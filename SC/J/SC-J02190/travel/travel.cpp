#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int x1=((int)s1[0]-(int)'0')*10+((int)s1[1]-(int)'0');
	int x2=((int)s2[0]-(int)'0')*10+((int)s2[1]-(int)'0');
	char y1=s1[2];
	char y2=s2[2];
	if(c1==c2){
		cout<<"1";
	}
	else cout<<"0";
	if(c1==c2&&x1==x2) cout<<"1";
	else cout<<"0";
	if(c1==c2&&((y1=='A'||y1=='B'||y1=='C')&&(y2=='A'||y2=='B'||y2=='C'))||((y1=='D'||y1=='F')&&(y2=='D'||y2=='F'))) cout<<"1";
	else cout<<"0";
	if(c1==c2&&(y1=='A'&&y2=='B')||(y1=='B'&&(y2=='A'||y2=='C'))||(y1=='C'&&y2=='B')||(y1=='D'&&y2=='F')||(y1=='F'&&y2=='D')) cout<<"1";
	else cout<<"0";
	
	return 0;
} 