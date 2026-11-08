#include<iostream> 
#include<vector>
//#include<>
using namespace std;

int ans1[300005];
int a[500005];
vector <int> v;
int  main()
{
	
	freopen("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int ans[300005]={0};
		ans[a[i]]=1;
		for(int j=1;j<=m;j++)if (ans[a[j]])ans1[a[j]]++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans1[m]<<' ';
	}
	return 0;
}//2026.10.31 10:54:55 ¸å¶þ Ô¤¹ÀµÃ·Ö£º0~4
