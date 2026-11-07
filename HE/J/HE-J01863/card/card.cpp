#include<iostream>
//#include<sskeat>
using namespace std;
int n,m,a[500005],ans[300005];
bool c[300005];
int sk[500005],head=0;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(c[a[j]])
			{
				while(c[a[j]])
				{
					c[sk[head]]=0;
					head--;
				}
			}
			sk[++head]=a[j];
			c[a[j]]=1;
		}
		for(int j=1;j<=m;j++)
		{
			ans[j]+=c[j];
			c[j]=0;
			//cout<<ans[j]<<' ';
		}
		head=0;
		//cout<<endl;
	}
	for(int j=1;j<=m;j++)
		cout<<ans[j]<<' ';
}
