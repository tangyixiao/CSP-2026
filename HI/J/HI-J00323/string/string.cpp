#include<bits/stdc++.h>
using namespace std;
struct st{
	long long num;
	char c;
};
deque<st>q;
long long ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long num1=0,num2=0;
	char c_1,c_2=' ';
	for(int i=1;i<=n;i++)
	{
		cin>>num1>>c_1;
		q.push_front({num1,c_1});
	}
	num1=0;
	c_1=0;
	long long minn;
	while(!q.empty())
	{
		if(num1==0)
		{
			num1=q.front().num;	
			c_1=q.front().c;
			q.pop_front();
		}
		if(!q.empty() && num2==0)
		{
			num2=q.back().num;
			c_2=q.back().c;
			q.pop_back();
		}
		minn=min(num1,num2);
		if(c_1!=c_2)
		{
			ans+=minn;
		}
		num1=num1-minn;
		num2=num2-minn;
	}
	cout<<ans;
	return 0;
}
