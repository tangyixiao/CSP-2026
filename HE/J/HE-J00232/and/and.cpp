#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans = 0,maxn = LLONG_MIN;
bool cho[200005],fir = 1;
int main()
{
	// 快读 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	// 主代码 
	cin>>n>>m;
	for (long long i = 1;i <= n;i++) cin>>a[i];
	for (long long i = 1;i <= m;i++) cho[i] = 1;
	do
	{
		ans = 0,fir = 1;
		for (long long i = 1;i <= n;i++)
		{
			if (cho[i])
			{
				if (fir) ans = a[i],fir = 0;
				else ans &= a[i];
			}
		}
		maxn = max(maxn,ans);
	}
	while (prev_permutation(cho + 1,cho + n + 1)); // 暴力枚举选择情况（虽然可能有点慢，但我的水平就放在这儿了） 
	cout<<maxn;
	return 0;
}
// 希望能多得几分 
