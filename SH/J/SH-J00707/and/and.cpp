#include <bits/stdc++.h>
using namespace std;
int a[200005];
int b[200005];
bool cmp(int x,int y)
{
	return x>y;
}
string bin(int n)
{
	string s="",s2="";
		while(n)
		{
			s+=(n%2+'0');
			n/=2;
		}
		for(int j=s.size()-1;j>=0;j--)
		{
			s2+=s[j];
		}
	return s2;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		string s=bin(a[i]);
		for(int j=0;j<s.size();j++)		
		{
			if(s[j]=='1') b[i]+=3;
			if(s[j]=='0') b[i]++;
		}
	}
	sort(b+1,b+n+1,cmp);
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		int cnt=0;
		string s=bin(a[i]);
		for(int j=0;j<s.size();j++)		
		{
			if(s[j]=='1') cnt+=3;
			else cnt++;
		}
		for(int k=1;k<=n;k++)
		{
			if(cnt==b[k])
			{
			 	b[k]=a[i];
			 	break;
			}
			
		}
	}
	int sum=b[1];
	for(int i=2;i<=m;i++)
	{
		sum&=b[i];
	}
	cout<<sum<<endl;
	return 0;
}
