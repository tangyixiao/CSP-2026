#include<bits/stdc++.h>
using namespace std;
long long a[500005];
int main()
{
	string b;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,re=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=2;i<=n;i++)
	{
		if(b[i]==b[i-1])
		{
			re=1;	
		} 
		else
		{
			re=0;
			break;
		}
	}
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	if(re==1)
	{
		cout<<"0";
		return 0;
	}
	
	return 0;
}
