#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
bool a1=0,f;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	long long num=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(i>1&&(c[i]!=c[i-1]))
		{
			a1=1;
		}
		if(a[i]>=1000000000)
		{
			f=1;
		}
		num+=a[i];
	}
	if(a1==0)
	{
		cout<<0<<endl;
		return 0;
	}
	string sing="",s1="",s2="";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			sing+=c[i];
		}
	}
	long long nuu=sing.size(),mmm=0;
	for(int i=0;i<nuu/2;i++)
	{
		s1+=sing[i];
	}
	if(nuu%2==0)
	{
		for(int i=nuu-1;i>=nuu/2;i--)
		{
			s2+=sing[i];
		}
	}
	else
	{
		for(int i=nuu-1;i>nuu/2;i--)
		{
			s2+=sing[i];
		}
	}
	//cout<<s1<<endl;
	//cout<<s2<<endl;
	for(int i=0;i<nuu/2;i++)
	{
		if(s1[i]!=s2[i])
		{
			mmm++;
		}
	}
	cout<<mmm<<endl;
	return 0;
}
