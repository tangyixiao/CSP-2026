#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a1,a2,b1,b2;
char a3,b3;
bool a,b,c,d;
bool flag1,flag2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=(c1[0]-'0')*10+(c1[1]-'0');
	a2=(s1[0]-'0')*10+(s1[1]-'0');
	a3=s1[2];
	b1=(c2[0]-'0')*10+(c2[1]-'0');
	b2=(s2[0]-'0')*10+(s2[1]-'0');
	b3=s2[2];
	if(a1==b1){
		a=1;
		flag1=1;	
	} 
	if(a2==b2){
		if(flag1){
			b=1;
			flag2=1;	
		}
	} 
	if((a3=='D' && b3=='F') || (a3=='F' && b3=='D')){
		if(flag1 && flag2){
			c=1;
			d=1;
		}
	} 
	if((a3=='A' && b3=='B') || (a3=='B' && b3=='A') || (a3=='B' && b3=='C') || (a3=='C' && b3=='B')){
		if(flag1 && flag2){
			c=1;
			d=1;
		}
	}
	if((a3=='A' && b3=='C') || (a3=='C' && b3=='A')){
		if(flag1 && flag2) c=1;
	} 
	cout<<a<<b<<c<<d;
	return 0;
}
