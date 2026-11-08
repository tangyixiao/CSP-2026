#include<bits/stdc++.h>
using namespace std;
string a1, a2, b1, b2; 
int  a, b, c, d;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1) 
	{
		a=1;
		if(a2[0]==b2[0] and a2[1]==b2[1]) 
		{
			b=1;
			if(a2[2]<='C' and b2[2]<='C') 
			{
				c=1;
				if(abs(a2[2]-b2[2])==1) d=1;
			}
			if(a2[2]>='D' and b2[2]>='D') c=d=1;
		}
	}	
	cout<<a<<b<<c<<d;
	return 0;
}
