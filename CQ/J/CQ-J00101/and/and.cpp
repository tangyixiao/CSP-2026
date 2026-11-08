#include<bits/stdc++.h>
using namespace std;
int arr[31];
int num[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		for(int j=0;j<=30;j++)arr[j]+=((num[i]>>j)&1);
	}
	int hy=-1;
	for(int i=30;i>=0;i--)
	{
		if(arr[i]>=m)
		{
			hy=i;
			break;
		}
	}
	if(hy==-1)
	{
		cout<<0;
		return 0;
	}
	queue<int> rep;
	for(int i=1;i<=n;i++)
	{
		if((num[i]>>hy)&1)
		{
			rep.push(num[i]);
		}
	}
	int want=hy-1;
	while(rep.size()>m&&want>=0)
	{
		int cnt=0;
		int ncnt=0;
		for(int i=1;i<=rep.size();i++)
		{
			cnt+=((rep.front()>>want)&1);
			ncnt+=(((rep.front()>>want)&1)==0);
			rep.push(rep.front());
			rep.pop();
		}
		if(cnt>=m&&cnt-ncnt>=m)
		{
			int siz=rep.size();
			for(int i=1;i<=siz;i++)
			{
				if(((rep.front()>>want)&1)==0)
				{
					rep.pop();
					continue;
				}
				rep.push(rep.front());
				rep.pop();
			}
		}
		want--;
	}
	if(rep.size()>m)
	{
		for(int i=1;i<=rep.size();i++)
		{
			num[i]=rep.front();
			rep.push(rep.front());
			rep.pop();
		}
		sort(num+1,num+rep.front()+1);
		int ans=2147483647;
		for(int i=1;i<=m;i++)
		{
			ans&=num[rep.front()+1-i];
		}
		cout<<ans;
		return 0;
	}
	int ans=2147483647;
	for(int i=1;i<=rep.size();i++)
	{
		ans&=rep.front();
		rep.push(rep.front());
		rep.pop();
	}
	cout<<ans;
	return 0;
}
