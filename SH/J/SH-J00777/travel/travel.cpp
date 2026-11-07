#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	bool f1,f2,f3;
	if(a==c)
	{
		cout<<1;
		f1 = 1;
	}
	else cout<<0;
	string s = b.substr(0,2);
	string t = d.substr(0,2);
	if((s==t)&&f1)
	{
		cout<<1;
		f2 = 1;
	}
	else cout<<0;
	string x = b.substr(2,1);
	string y = d.substr(2,1);
	if(b==d||f2==0)cout<<0;
	if(x=="A"&&f2||x=="B"&&f2||x=="C"&&f2)
	{
		if(y=="A"||y=="B"||y=="C")
		{
			cout<<1; 
			f3 = 1;
		}
		else cout<<0;	
	}	
	if(x=="D"&&f1&&f2||x=="F"&&f1&&f2)
	{
		if(y=="D"||y=="F")
		{
			cout<<1;
			f3 = 1;
		}
		else cout<<0;
	}
	if(b==d||f3==0)cout<<0;
	else
	{
		char cc = x[0];
		char c2 = y[0];
		int aa = (int(cc));
		int bb = (int(c2));
		if(aa==bb+1||bb==aa+1)cout<<1;
		else cout<<0;
	}
	return 0;	
} 
