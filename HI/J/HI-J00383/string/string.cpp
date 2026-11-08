#include <bits/stdc++.h>
using namespace std;
int s[10001],ans[10001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a1,c1;
		cin>>a1>>c1;
		for(int j=1;j<=a1;j++)
		{
			cin>>s[c1];
		}
		for(int k=a1;k>0;k--)
		{
			cin>>ans[c1];
		}
	}
	bool flag=true;
	for(int i=0;i<10001;i++)
	{
		if(s[i]!=ans[i])
		{
			flag=false;
			sum++;
		}
	}
	if(flag)
	{
		cout<<"0";
	}
	else
	{
		cout<<sum;
	}
	return 0;
}
