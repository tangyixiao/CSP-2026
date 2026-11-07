#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
string s;
ll l=1;
struct node
{
	char c;
	ll lc,st;
}a[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		ll xx;
		char C;
		cin>>xx>>C;
		if(a[i-cnt-1].c==C)
		{
			a[i-cnt-1].lc+=xx;
			cnt++;
			continue;
		}
		a[i-cnt].c=C;
		a[i-cnt].lc=xx;
		a[i-cnt].st=l;
		l+=xx;
	}
	n-=cnt;
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a[i].lc;j++)
		{
			s+=a[j].c;
		}
	}
	int sum=0;
	for(int i=1;i<=s.size()/2;i++)
	{
		if(s[s.size()-i-1]!=s[i-1])sum++;
	}
	cout<<sum;
	return 0;
 } 
