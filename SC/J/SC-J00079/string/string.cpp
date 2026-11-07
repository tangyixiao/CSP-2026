#include<bits/stdc++.h>
using namespace std;
struct ST{
	char c;
	long long num;
}a1,a2;
deque <ST> a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld %c",&a1.num,&a1.c);
		a.push_front(a1);
	}
	while (a.size()>1)
	{
		a1=a.front();
		a2=a.back();
		a.pop_front();
		a.pop_back();
		if (a1.c!=a2.c)
		{
			if (a1.num>a2.num)
			{
				ans+=a2.num;
				a1.num-=a2.num;
				a.push_front(a1);
			}
			else if (a1.num<a2.num)
			{
				ans+=a1.num;
				a2.num-=a1.num;
				a.push_back(a2);
			}
			else
				ans+=a1.num;
		}
		else if (a1.c==a2.c)
		{
			if (a1.num>a2.num)
			{
				a1.num-=a2.num;
				a.push_front(a1);
			}
			else if(a1.num<a2.num)
			{
				a2.num-=a1.num;
				a.push_back(a2);
			}
		}
	}
	printf("%lld",ans);
	return 0;
}