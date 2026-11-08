#include<bits/stdc++.h>
using namespace std;
namespace Ganlai
{
#define int long long
	const int N=2e5+1,INF=9e18;
	int n,m;
	bitset<31> a[N],ans;
	bitset<N> b;
	void main()
	{
		scanf("%lld%lld",&n,&m);
		for(int i=1;i<=n;++i)
		{
			int x;
			scanf("%lld",&x);
			a[i]=x;
		}
		for(int i=30;i>=0;--i)
		{
			int sum=0;
			for(int j=1;j<=n;++j)
				if(!b[j]&&a[j][i])
					++sum;
			if(sum<m)
				continue;
			ans[i]=1;
			for(int j=1;j<=n;++j)
				if(!a[j][i])
					b[j]=true;
		}
		printf("%llu\n",ans.to_ullong());
	}
#undef int
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	Ganlai::main();
	return 0;
}
//	T:O(n)
//	M:3124 KB
