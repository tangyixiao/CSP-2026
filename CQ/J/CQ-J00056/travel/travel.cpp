#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool p=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)
		cout<<1;
	else{
		cout<<0;
		p=0;
	}
	if(b[0]==d[0]&&b[1]==d[1]&&a==c&&p)
		cout<<1;
	else{
		cout<<0;
		p=0;
	}
	if((b[2]=='C'&&d[2]=='D'||b[2]=='D'&&d[2]=='C')&&(b[0]==d[0]&&b[1]==d[1]&&a==c)){
		cout<<0;
		p=0;
	}
	else if(b[0]==d[0]&&b[1]==d[1]&&a==c&&p)
		cout<<1;
	else{
		cout<<0;
		p=0;
	}
	if(p&&abs(b[2]-d[2])==1)
		cout<<1;
	else if((b[2]=='C'&&d[2]=='D'||b[2]=='D'&&d[2]=='C')&&(b[0]==d[0]&&b[1]==d[1]&&a==c))
		cout<<0;
	else
		cout<<0;
	return 0;
}
