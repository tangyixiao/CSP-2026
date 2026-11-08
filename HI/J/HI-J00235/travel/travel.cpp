#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
bool a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		a=1;
	}
	if(a2[0]==b2[0] && a2[1]==b2[1] && a==1){
		b=1;
	}
	if(a2[2]=='D'&&b2[2]=='F' || a2[2]=='F'&&b2[2]=='D' ||  a2[2]=='C'&&b2[2]=='B' || a2[2]=='B'&&b2[2]=='C' || a2[2]=='C'&&b2[2]=='A' || a2[2]=='A'&&b2[2]=='C' || a2[2]=='B'&&b2[2]=='A' || a2[2]=='A'&&b2[2]=='B' && a==1){
		if(b==1){
			c=1;
		}
	}
	if(a2[2]=='D'&&b2[2]=='F' || a2[2]=='F'&&b2[2]=='D' ||  a2[2]=='C'&&b2[2]=='B' || a2[2]=='B'&&b2[2]=='C' || a2[2]=='B'&&b2[2]=='A' || a2[2]=='A'&&b2[2]=='B' && a==1){
		if(b==1){
			d=1;
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}
