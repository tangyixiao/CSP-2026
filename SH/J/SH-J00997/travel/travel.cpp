#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool e,l=1,f,g;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c)l=0,e=0,f=0,g=0;
	else if(b[0]==d[0]&&b[1]==d[1]){
		e=1;
		if(b[2]=='A'&&d[2]=='B'||b[2]=='A'&&d[2]=='C'||b[2]=='B'&&d[2]=='A'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='A'||b[2]=='C'&&d[2]=='B'||b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D')f=1;
		if(b[2]=='B'&&d[2]=='A'||b[2]=='A'&&d[2]=='B'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='B'||b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D')g=1;
		
	}
	cout<<l<<e<<f<<g;
	return 0;
}
