#include<bits/stdc++.h>
using namespace std;
int c(string a[],int n,int m)
{
	int ans=0;
	int b[n];
	string d[n];
	for(int i=17,e=0;i>=0;i--)
	{
		ans=0;
		for(int j=0;j<n;j++)
		{
			if(a[j][i]==1)
			{
				ans++;
				b[e]=j;
				e++;
			}
		}
		if(ans>=m&&i>0)
		{
			string d[ans];
			for(int i=0;i<ans;i++)
			{
				d[i]=a[b[i]];
			}
			return pow(2,i)+c(d,ans,m);
		}
		else if(ans>=m&&i==0)
		{
			return 1;
		}
	}
	return 0;
}
int too(string a)
{
	if(a[a.size()-1]='1'&&a.size()>1)
	{
		string b;
		for(int i=0;i<a.size()-1;i++)
		{
			b[i]=a[i];
		}
		return 2*too(b)+1;
	}
	else if(a[a.size()-1]='0'&&a.size()>1)
	{
		string b;
		for(int i=0;i<a.size()-1;i++)
		{
			b[i]=a[i];
		}
		return 2*too(b);
	}
	else
	{
		return 1;
	}
}
string co(string i,int s)
{
	if(s>=1) return "0"+co(i,s-1);
	else return i;
}
string to(int a,int s)
{
	if(a%2==0)
	{
		return to(a/2,s-1)+"0";
	}
	else if(a==1)
	{
		return co("1",s);
	}
	else
	{
		return to(a/2,s-1)+"1";
	}
}
int main()
{
	/*freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);*/
	int n,m;
	cin>>n>>m;
	string l[n];
	for(int i=0,j;i<n;i++)
	{
		cin>>j;
		l[i]=to(j,17);
	}
	cout<<c(l,n,m);
}
