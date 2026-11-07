#include<bits/stdc++.h>
using namespace std;
vector<long long> v,x;
queue<long long> q;
long long n,m;
bool ert(int a)
{
	int o=0;
	for(int i=0;i<q.size();i++)
	{
		if(q.front()==a) o++;
		q.push(q.front());q.pop();
	}
	return o>1;
}
int wer(int a)
{
	if(q.size()>1)
	{
		for(int j=0;j<q.size();j++)
		{
			if(q.front()==a && ert(a))
			{
				q.pop();
     			for(int k=0;k<q.size();k++)
				{
					if(q.front()==a) {
						break;
					}
					q.pop();
				}
				q.pop();
				q.push(a);
				break;
			}
			int r=q.front();
			q.push(r);
			q.pop();
		}
	}
	return 0;
}
int qwe(int w)
{
	for(int i=w;i<n;i++)
	{
		q.push(v[i]);
		wer(v[i]);
	}
	return 0;
}
int sdf(int r)
{
	for(int l=1;l<=m;l++)
	{
		if(r==l) x[l]++;
	}
	return 0;
}
int asd(int i)
{
	for(int u=0;u<q.size();u++)
	{
		sdf(q.front());
		q.pop();
	}
	return 0;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<=m;i++)
	{
		x.push_back(0);
	}
	for(int i=0;i<n;i++)
	{

		long long a;cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		qwe(i);
		asd(i);
	}
	for(int i=1;i<=m;i++)
	{
		cout<<x[i]<<" ";
	}
	return 0;
}