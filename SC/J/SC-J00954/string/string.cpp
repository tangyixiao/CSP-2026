#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n;
long long ans;
unsigned long long ans1,ans2;
struct ls{
	long long l;
	char a;
}b[N];
int fun()
{
	for(int i=1;i<=n-1;i++)
	{
		if(b[i].l!=b[i+1].l)
			return 0;
	}
	return 1;
}
int fun1()
{
	for(int i=1;i<=n-1;i++)
	{
		if(b[i].a!=b[i+1].a) return 0;
	}
	return 1;
}
int hui(string s)
{
	int cnt=0;
	for(int i=0;i<s.size()-i;i++)
	{
		if(s[i]!=s[s.size()-i])
		{
			cnt++;
		}
	}
	return cnt;
}
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i].l>>b[i].a;
	}
	if(fun())
	{
		for(int i=1;i<=n;i++)
		{
			s+=b[i].a;
		}
		ans=hui(s)*b[1].l;
	}
	else if(fun1())
	{
		cout<<0;
		return 0;
	}
	else
	{
		int i=1,j=1,k=n;
		for(int i=1;i<=n/2;i++)
		{
			ans1+=b[i].l;
		}
		for(int i=n/2+1;i<=n;i++)
		{
			ans2+=b[i].l;
		}
		ans=min(ans1,ans2);
	}
	cout<<ans;
	return 0;
} 