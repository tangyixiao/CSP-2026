#include<bits/stdc++.h>
using namespace std;
bool pol[200005][50],ps[200005];
long long n,m,mxu,ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		long long x;
		scanf("%lld",&x);
		long long uop=0;
		while(x)
		{
			if(x%2)pol[i][uop]=1;
			x/=2;
			uop++;
		} 
		mxu=max(mxu,uop-1);
	}
	for(int i=mxu;i>=0;i--)
	{
		long long gs=0;
		for(int j=1;j<=n;j++)
			if(!ps[j]&&pol[j][i])gs++;
		ans*=2;
		if(gs>=m){
//			cout<<"canget "<<i<<endl;
			ans++;	
			for(int j=1;j<=n;j++)if(!pol[j][i])ps[j]=1;
		}
	}
	printf("%lld",ans);
	return 0;
}
