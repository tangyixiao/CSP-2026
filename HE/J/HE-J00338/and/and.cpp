#include<bits/stdc++.h>
using namespace std;
int m,n,num[200010],jg=1ll<<30;
//bool ejn[30][200010];
int main()
{
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>num[i];
	sort(num+1,num+n);
/*	for(int i=1;i<=n;i++)
	{
		for(int j=1;num[i];j++)
		{
			ejn[j][i]=num[i]%2;
			num[i]/=2;
		}
	}*/
	for(int i=n;i>=n-m;i--)jg&=num[i];
	cout<<jg;
}
