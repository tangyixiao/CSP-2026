#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b)
{
	return a>b;
}
string turn(long long num)
{
	string num2;
	while(num>0)
	{
		if(num%2==0)
		{
			num2+='0';
			num=num/2;
		}
		else
		{
			num2+='1';
			num=num/2;
		}
	}
	return num2;
}
long long back(string s1,long long maxsize)
{
	long long num=0;
	for(long long i=0;i<maxsize;i++)
	{
		if(s1[i]=='1')
		{
			long long tmp=1;
			for(long long j=0;j<i;j++)
			{
				tmp*=2;
			}
			num+=tmp;
		}
	}
	return num;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n=0,m=0;
	cin>>n>>m;
	string num2[n];
	long long a[n],b[n];
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(long long i=0;i<n;i++)
	{
		num2[i]=turn(a[i]);
	}
	long long maxsize=0;
	long long cnt=0;
	for(long long i=num2[0].size();i>0;i--)
	{
		if(cnt>=m) 
		{
			maxsize=i+1;
			break;
		}
		cnt=0;
		for(long long j=0;j<n;j++)
		{
			if(num2[j].size()>=i&&num2[j][i-1]=='1') cnt++;
			if(cnt>=m) break;
		}
	}
	for(long long i=0;i<n;i++)
	{
		b[i]=back(num2[i],maxsize);
	}
	sort(b,b+n,cmp);
	for(long long i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	long long ans=b[0];
	for(long long i=1;i<m;i++)
	{
		ans&=b[i];
		cout<<"\n";
	}
	cout<<ans;
	return 0;
}
