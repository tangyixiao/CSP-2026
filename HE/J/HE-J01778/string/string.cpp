#include <bits/stdc++.h>
using namespace std;
struct Shu
{
	int a;
	char b;
};
Shu m[900000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	if(n<=1)
	{
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>m[i].a>>m[i].b;
	}
	if(m[1].b==m[n].b)
	{
		cout<<"0";
		return 0;
	}
	if(n<=2)
	{
		if(m[1].b==m[2].b)
		{
			cout<<"0";
			return 0;
		}
		if(m[1].a==1)
		{
			cout<<"1";
			return 0;
		}
		if(m[1].a==2)
		{
			cout<<"2";
			return 0;
		}
		if(m[1].a==3)
		{
			cout<<"3";
			return 0;
		}
		if(m[1].a==4)
		{
			cout<<"4";
			return 0;
		}
		if(m[1].a==5)
		{
			cout<<"5";
			return 0;
		}
	}
    if(m[1].a<=1)
    {
    	cout<<n-1;
    	return 0;
	}

}
