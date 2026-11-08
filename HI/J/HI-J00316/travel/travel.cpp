#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=b.substr(0,2);
	f=d.substr(0,2);
	if(a==c)
		cout<<1;
	else
		cout<<0;
	if(e==f&&a==c)
	{
		cout<<1;
		if(b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D'||b[2]=='A'&&d[2]=='B'||b[2]=='A'&&d[2]=='C'||b[2]=='B'&&d[2]=='C'||b[2]=='B'&&d[2]=='A'||b[2]=='C'&&d[2]=='A'||b[2]=='C'&&d[2]=='B')
		{
			cout<<1;
			if(abs(b[2]-d[2])==1)
				cout<<1;
			else
				cout<<0;
		}
		else
			cout<<"00";
	}
	else
		cout<<"000";
	return 0;
} 
