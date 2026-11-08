#include<bits/stdc++.h>
using namespace std;
namespace Ganlai
{
#define int long long
	const int N=2e5+1,INF=9e18;
	int n,ans;
	struct Union
	{
		int a;
		char c;
	};
	deque<Union> q;
	void main()
	{
		scanf("%lld",&n);
		for(int i=1;i<=n;++i)
		{
			int a;
			char c;
			scanf("%lld %c",&a,&c);
			q.push_back({a,c});
		}
		while(q.size()>1)
		{
			const Union f=q.front(),b=q.back();
			q.pop_front(),q.pop_back();
			if(f.c==b.c)
			{
				if(f.a>b.a)
					q.push_front({f.a-b.a,f.c});
				else if(f.a<b.a)
					q.push_back({b.a-f.a,b.c});
			}
			else
			{
				if(f.a>b.a)
					ans+=b.a,q.push_front({f.a-b.a,f.c});
				else if(f.a<b.a)
					ans+=f.a,q.push_back({b.a-f.a,b.c});
				else
					ans+=f.a;
			}
		}
		printf("%lld\n",ans);
	}
#undef int
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	Ganlai::main();
	return 0;
}
//	T:O(n)
//	M:3108 KB
