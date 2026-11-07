#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
int n;
struct stu
{
	long long shu;
	char ch;
}a[maxn];
long long ans=0,ans2=0;
deque<char>dq;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%lld%s",&a[i].shu,&a[i].ch);
		for(int j=1;j<=a[i].shu;j++)
		{
			dq.push_front(a[i].ch);
			ans++;
		}
	}
	for(int i=1;i<=ans/2;i++)
	{
		if(dq.front()!=dq.back())
		{
			ans2++;
			dq.pop_front();
			dq.pop_back();
		}
		else
		{
			dq.pop_front();
			dq.pop_back();
		}
	}
	printf("%lld",ans2);
	return 0;
}
