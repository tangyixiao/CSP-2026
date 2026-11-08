#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int t,s;
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	if(b[0]==d[0]&&b[1]==d[1]&&a==c)
	{
		cout<<"1"; 
		t=1;
	}
	else{
		cout<<"0";
	}
	if(a==c&&t==1)
	{
		if(b[2]=='A'||b[2]=='B'||b[2]=='C'&&d[2]=='A'||d[2]=='B'||d[2]=='C'){
			cout<<"1";
			s=1;
		}
		else if(b[2]=='D'||b[2]=='E'||d[2]=='D'&&d[2]=='E')
		{
			cout<<"1";
			s=1;
		}
		else{
			cout<<"0";
		}
	}
	else
	{
		cout<<"0";
	}
	if(s==1)
	{
		if(b[2]=='A'&&d[2]=='B')
		{
			cout<<1;
		}
		else if(b[2]=='B'&&d[2]=='C')
		{
			cout<<1;
		}
		else if(b[2]=='D'&&d[2]=='E')
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	return 0;
} 
