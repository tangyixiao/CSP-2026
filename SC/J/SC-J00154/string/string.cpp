#include<bits/stdc++.h>
using namespace std;
long long a;
string c;
string v;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long lon=0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>c;
		lon+=a;
		for(int j=0;j<a;j++)
		{
			v+=c;
		}
	}
	
	string l,r;
	long long l1=0;
	for(int i=0;i<=lon/2;i++)
	{
		l[i]=v[i];
	}
	for(int i=lon-1;i>=lon/2;i--)
	{
		r[l1]=v[i];
		l1++;
	}
	long long sum=0;
	for(int i=0;i<=lon/2;i++)
	{
		if(l[i]!=r[i])
		sum++;
	}
	cout<<sum;
}