#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N][35];
void to2(int num,int i)
{
	int now=0; 
	while(num!=0)
	{
		a[i][now]=num%2;
		num/=2,now++;
	}
}
int q[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int num;
		cin>>num;
		to2(num,i);	
	}
	for(int i=30;i>=0;i--)
	{
		int flag=0;
		for(int j=1;j<=n;j++)
			if(q[j]==0&&a[j][i]==1) flag++;
		if(flag>=m)
		{
			ans+=(1<<i);
			for(int j=1;j<=n;j++)
			{
				if(q[j]==0&&a[j][i]==1) q[j]=0;
				else q[j]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}
