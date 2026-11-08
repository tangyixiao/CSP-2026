#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,b,c,sum=0;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a!=c)
	{
		sum++;
	}
	else
	{
		sum=0;
	}
	if(c!=b)
	{
		sum++;
	}
	else
	{
		sum=0;
	}
	cout<<sum;
	return 0;
}

