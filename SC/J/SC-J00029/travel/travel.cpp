#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	bool pd=1;
	if(a==c&&a!="01"&&c!="01"&&a!="16"&&c!="16")cout<<1;
	else {cout<<0;pd=0;}
	if(b[1]==d[1]&&b[0]==d[0]&&b[2]!=d[2])cout<<1;
	else {
		pd=0;
		cout<<0;
	}
	
	if((b[2]-'D'>=0&&d[2]-'D'>=0&&pd)||(b[2]-'D'<0&&d[2]-'D'<0&&pd))cout<<1;
	else {
		pd=0;
		cout<<0;
	}
	if(pd&&(abs(b[2]-d[2])==1)||(abs(b[2]-d[2]==2)&&(b[2]=='F'||d[2]=='F')))cout<<1;
	else cout<<0;
	pd=1;
	a="",b="",c="",d=""; 
	return 0;
}