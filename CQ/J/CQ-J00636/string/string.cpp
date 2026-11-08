#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,a,sum,ans;
char c,s[N];
namespace did{
	signed main()
	{
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout); 
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a);
			cin>>c;
			for(int j=sum+1;j<=sum+a;j++)
				s[j]=c;
			sum+=a; 
		}
		for(int i=1;i<=sum/2;i++)
			if(s[i]!=s[sum-i+1])ans++;
		printf("%lld",ans);
		return 0;
	}
}
signed main()
{
	did::main();
	return 0;
}
//¹À·Ö:60
//¸´ÔÓ¶È:O(n*sum({a[i]})) 
