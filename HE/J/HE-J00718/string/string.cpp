#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char c;
	cin>>n;
	if(n==1)
	{
		cout<<0;
	}
	if(n==2)
	{
		cin>>a>>c;
		char d=c;
		int b=a;
		cin>>a>>c;
		if(d==c)
		{
			cout<<0;
		}
		else
		{
			cout<<min(a,b);
		}
	}
	return 0;
 } 
