#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node
{
	int num;
	char type;
};
int n;
deque<node>dq;
string a;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin>>n;
	while(n--)
	{
		node xy;
		cin>>xy.num>>xy.type;
		dq.push_back(xy);
	}
	int ans=0;
	while(dq.size()>1)
	{
		node x=dq.front(),y=dq.back();
		if(x.type!=y.type) 
		{
			ans+=min(x.num,y.num);
			if(x.num>y.num)
			{
				dq.pop_back();
				dq.front().num-=y.num;
			}
			else if(x.num<y.num)
			{
				dq.pop_front();
				dq.back().num-=x.num;
			}
			else
			{
				dq.pop_front();
				dq.pop_back();
			}
		}
		else
		{
			if(x.num>y.num)
			{
				dq.pop_back();
				dq.front().num-=y.num;
			}
			else if(x.num<y.num)
			{
				dq.pop_front();
				dq.back().num-=x.num;
			}
			else
			{
				dq.pop_front();
				dq.pop_back();
			}
		}
	}
	cout<<ans;
}
