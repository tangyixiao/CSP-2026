#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node
{
	int li;
	char ai;
};
stack<node> s1,s2;
int n;
int l[200005];
char a[200005];
int ans;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>l[i]>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		s1.push((node){l[i],a[i]});
	}
	for(int i=n;i>=1;i--)
	{
		s2.push((node){l[i],a[i]});
	}
	while((!s1.empty())&&(!s2.empty()))
	{
		if(s1.top().li>s2.top().li)
		{
			if(s1.top().ai==s2.top().ai)
			{
				s1.top().li-=s2.top().li;
				s2.pop();
			}
			else
			{
				s1.top().li-=s2.top().li;
				ans+=s2.top().li;
				s2.pop();
			}
		}
		else if(s1.top().li<s2.top().li)
		{
			if(s1.top().ai==s2.top().ai)
			{
				s2.top().li-=s1.top().li;
				s1.pop();
			}
			else
			{
				s2.top().li-=s1.top().li;
				ans+=s1.top().li;
				s1.pop();
			}
		}
		else if(s1.top().li==s2.top().li)
		{
			if(s1.top().ai==s2.top().ai)
			{
				s1.pop();
				s2.pop();
			}
			else
			{
				ans+=s1.top().li;
				s1.pop();
				s2.pop();
			}
		}
	}
	cout<<ans/2<<endl;
} 
