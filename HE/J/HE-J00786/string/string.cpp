#include<bits/stdc++.h>
using namespace std;
char a[10005];
int n;
long long l=0;
bool b=true;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string s1,s2;
	for(int i=1;i<=n;i++)
	{
    	int m;
		cin>>m;
		l+=m;
		cin>>a[i];
		if(a[i]!=a[i-1])
		{
			b=false;
		}
		for(int j=1;j<=m;j++)
		{
			s1+=a[i];
		}
	}
	if(b==true)
	{
		cout<<"0";
		return 0;
	}
	for(int i=l-1;i>=0;i--)
	{
		s2+=s1[i];
	}
	long long ans=0;
	for(int i=0;i<l;i++)
	{
		if(s1[i]!=s2[i])
		{
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}
