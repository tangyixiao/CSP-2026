#include<bits/stdc++.h>
using namespace std;
string a,b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	cin>>n;
	for(int i=0;i<2*n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<2*n;i+2)
	{
		int p=a[i]-'0';
		ans+=p;
	}
	if(ans%2==0)
	{
		cout<<ans/2-1;
	}
	else
	{
		cout<<ans/2;
	}
	cout<<7;
	return 0;
}
