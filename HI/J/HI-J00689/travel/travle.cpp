#include <bits/stdc++.h>
using namespace std;
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
string a,b,c,d;
int t;
int main()
{
	cin>>a>>b>>c>>d;
	if(a!=c) cout<<'0000';
	else
	{
		cout<<'1';	
		for(int i=0;i<d.size()-1;i++)
		{
			if(b[i]!=d[i]) t=1;
		}
		if(t) cout<<'000';
		else
		{
			cout<<'1';
			if(!(b[b.size()-1]<='C' and d[d.size()-1]<='C' or b[b.size()-1]>'C' and d[d.size()-1]>'C')) cout<<'00';
			else
			{
				cout<<'1';
				if(b[b.size()-1]-d[d.size()-1]==1 or b[b.size()-1]-d[d.size()-1]==-1) cout<<'1';
				else cout<<'0';
			}
		} 	
	} 
	return 0;
}
