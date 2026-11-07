#include<bits/stdc++.h>
using namespace std;
const long long N=1e10+5;
int a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int m=0;
	int n,b=0;
	cin>>n;
	for(int i=1;i<=n*2;i++)
	{
		for(int i=1;i<=2;i++)
		{
		   if(i==1)
		   {
		   	cin>>a[i];
		   }
		   cin>>s[i];
		}
	}
	for(int i=1;i<=n*2;i++)
	{
		if(s[i]==s[i+1])m++;
		if(n==m)
		{
			cout<<"0";
			return 0;
		}
	}
	for(int i=1;i<=n*2 ;i++)
	{
		if(s[i]%2!=0)b+=a[i];
		else 
		{
			b+=a[i]/2;
		}
	}
	cout<<b;
	return 0;
}
