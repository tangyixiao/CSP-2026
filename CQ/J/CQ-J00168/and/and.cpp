#include<bits/stdc++.h> // 100 上一世，我被xor打出了心理阴影。这一世，我将夺回我的一切！ 
#define maxn 200005 
using namespace std;
bool x[2][maxn],cnt;
int ans=INT_MAX,sum;
int a[maxn];
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		x[1][i]=true;
	}
	sum=n;
	for(int k=(1<<30);k>=1;k>>=1)
	{
		int l=sum;
		for(int i=1;i<=n;i++)
		{
			x[cnt][i]=x[!cnt][i];
			if(!(a[i]&k))
			{
				sum-=x[cnt][i];
				x[cnt][i]=false;
			}
		}
//		cout<<k<<':'<<sum<<endl;
		if(sum>=m)
			cnt^=1;
		else
			sum=l;
	}
	sum=0;cnt^=1;
	for(int i=1;i<=n&&sum<m;i++)
	{
		if(x[cnt][i]||m-sum>=n-i+1)
		{
			ans&=a[i];
//			cout<<i<<'-'<<a[i]<<endl; 
			sum++;
		}
	}
	cout<<ans;
	return 0;
}
/*

极光君，红尘君，若水君，天枢君，无极君，南海君，悬玉君…… 

*/
