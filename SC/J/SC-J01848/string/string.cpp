#include<bits/stdc++.h>
using namespace std;
long long n,s;
struct note
{
	long long a;
	char c;
};
deque<note> d;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long x;
		char y;
		cin>>x>>y;
		d.push_back({x,y});
	}
	while(d.size()>=2)
	{
		long long a1 = d.front().a,a2 = d.back().a;
		char c1 = d.front().c,c2 = d.back().c;
		long long minn = min(a1,a2);
		if(c1==c2)
		{
			a1 -= minn;
			a2 -= minn;
		}
		else
		{
			a1-=minn;
			a2-=minn;
			s+=minn;
		}
		d.pop_front();
		d.pop_back();
		if(a1>0) d.push_front({a1,c1});
		if(a2>0) d.push_back({a2,c2});
	}
	cout<<s;
	return 0;
}