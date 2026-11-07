#include<bits/stdc++.h>
using namespace std;
int n;
long long sum[200005],l,m;
queue<char> ss;
stack<char> s2;
struct node{
	char ch;
	long long a;
};
node h[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i].a>>h[i].ch;
		sum[i]=h[i].a+sum[i-1];
	}
	long long k=sum[n]/2;
	for(int i=1;i<=n;i++)
	{
		if(sum[i]>=k)
		{
			l=k-sum[i-1];
			m=i;
			break;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(i==m)
		{
			for(int j=1;j<=l;j++)
			{
				ss.push(h[i].ch);
			}
		}
		else
		{
			for(int j=1;j<=h[i].a;j++)
			{
				ss.push(h[i].ch);
			}
		}
	}
	for(int i=m;i<=n;i++)
	{
		if(i==m)
		{
			for(int j=l+1;j<=h[i].a;j++)
			{
				s2.push(h[i].ch);
			}
		}
		else
		{
			if(sum[n]%2==1)
			{
				for(int j=1;j<=h[i].a;j++)
				{
					s2.push(h[i].ch);
				}
			}
			else
			{
				for(int j=1;j<=h[i].a;j++)
				{
					s2.push(h[i].ch);
				}
			}
		}
	}
	long long tot=0;
	for(int i=1;i<=k;i++)
	{
		if(ss.front()==s2.top()) tot++;
		ss.pop();
		s2.pop();
	}
	cout<<k-tot<<endl;
	return 0;
} 