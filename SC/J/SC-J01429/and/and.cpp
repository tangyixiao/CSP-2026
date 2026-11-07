#include<bits/stdc++.h>
using namespace std;
int a[100005],c[100005],lmax=-1,ans[100005];
string b[100005]; 
bool flag[100005];
bool cmp(int a,int b)
{
	return a>b;
}
string ts(int a)
{
	string s1="";
	while(a!=0)
	{
		s1+=a%2+'0';
		a/=2;
	}
	return s1;
}
string ta(string s1)
{
	string s2="";
	for(int i=s1.size()-1;i>=0;i--)
	{
		s2+=s1[i];
	}
	return s2;
}
int tsl(int a)
{
	string s1="";
	while(a!=0)
	{
		s1+=a%2+'0';
		a/=2;
	}
	return s1.size();
}
int ti(string s1)
{
	string s2="";
	int digit=1,a=0,cnt=0;
	for(int i=s1.size()-1;i>=0;i--)
	{
		s2+=s1[i];
	}
	while(cnt<s2.size())
	{
		a+=(s2[cnt]-'0')*digit;
		digit*=2;
		cnt++;
	}
	return a;
}
int main()
{
	int n,m,sum=0;
	cin>>n>>m;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=ts(a[i]);
		if(tsl(a[i])>lmax)
		{
			lmax=tsl(a[i]);
		}
		for(int j=0;j<b[i].size();j++)
		{
			c[j]+=b[i][j]-'0';
		}
	}
	
	for(int i=0;i<lmax;i++)
	{
		if(c[i]<m)
		{
			flag[i]=1;
			for(int j=0;j<n;j++)
			{
				b[j][i]='0';
			}
		}
	}
	for(int i=0;i<lmax;i++)
	{
		b[i]=ta(b[i]);
		ans[i]=ti(b[i]);
	}
	sort(ans,ans+n,cmp);
	sum=ans[0];
	for(int i=1;i<m;i++)
	{
		sum=sum&ans[i];
	}
	cout<<sum;
	return 0;
}