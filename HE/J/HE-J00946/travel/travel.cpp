#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool a,b,c,d;
	int n,x;
	cin>>a>>b>>c>>d;
	if(n==2)
	for(int i=1;i*i<=n;i++)
	{
		if(a<=b||a>=b&&a||b==x)
			cout<<"1";
		else
			cout<<"0";
		if(c<=d||c>=d&&c||d==x)
			cout<<"1";
		else
			cout<<"0";
	}
	if(n==3)
	for(int i=1;i<=n;i++)
	{
		if(a==b+1||a==b-1&&a||b==x)
			cout<<"1";
		else
			cout<<"0";
		if(c==d+1||c==d-1&&c||d==x)
			cout<<"1";
		else
			cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
