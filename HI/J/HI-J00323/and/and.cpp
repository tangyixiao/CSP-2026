#include<bits/stdc++.h>
using namespace std;
queue<string>q;
int ans[35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long ll;
	string cll="";
	for(int i=0;i<n;i++)
	{
		cin>>ll;
		for(int j=29;j>=0;j--)
		{
			cll+=((ll>>j)&1?'1':'0');
		}
		q.push(cll);
		cll="";
	}
	int num=0;
	int n_=n;
	for(int i=0;i<30;i++)
	{
		num=0;
		for(int j=0;j<n;j++)
		{
			cll=q.front();
			if(cll[i]=='1')
			{
				num++;	
			}
			q.pop();
			q.push(cll);
		}
		if(num>=m)
		{
			n_=n;
			n=num;
			ans[i]=1;
			for(int j=0;j<n_;j++)
			{
				cll=q.front();
				q.pop();
				if(cll[i]=='1')
				q.push(cll);
			}
		}
	}
	long long anss=0;
	long long poww=1;
	for(int i=29;i>=0;i--)
	{
		if(ans[i]==1)
		anss+=poww;
		poww*=2;
	}
	cout<<anss;
	return 0;
}
