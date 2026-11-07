#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long int a[N];
bool cmp(int x,int y)
{
	return x>y;
}
string f(long long int ww)
{
	string s;
	while(ww!=0)
	{
		s+=(ww%2+'0');
		ww/=2;
	}
	return s;
}
long long int q(long long int x,long long int y)
{
	string s1=f(x),s2=f(y),anss;
	int a1=s1.size(),a2=s2.size();
	for(int i=0;i<=s1.size()-1;i++)
	{
		if(s1[i]=='1'&&s2[i]=='1')
		{
			anss+='1';
		}
		else
		{
			anss+='0';
		}
	}
	long long int ans=0,c=1;
	for(int i=0;i<=anss.size()-1;i++)
	{
		ans+=(anss[i]-'0')*c;
		c*=2;
	}
	return ans;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	long long int ans=a[1];
	for(int i=2;i<=m;i++)
	{
		ans=q(ans,a[i]);
	}
	cout<<ans;
	return 0;
}