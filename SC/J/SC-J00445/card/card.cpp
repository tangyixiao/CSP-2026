#include<bits/stdc++.h>
using namespace std;
int a[5005],tot[3005],vis[3005];
int pd[5005];
int n,m;
void work(int t)
{
//	cout <<1;
	int pdts=0;
	memset(pd,0,sizeof pd);
	memset(vis,0,sizeof vis);
//	cout <<2;
	for(int i=t;i<=n;i++)
	{
//		cout <<3;
		for(int j=pdts;j>=1;j--)
		{
//			cout <<4;
//				cout <<5;
			if(pd[j]==a[i])
			{
//					cout <<6;
				for(int k=pdts;k>=j;k--)
				{
					pd[k]=0;
					pdts--;
				}
//					for(int k=1;k<=pd.size();k++) cout <<pd[k] <<' ';
			}
//			cout <<9;
		}
		pd[++pdts]=a[i];
	}
	for(int i=1;i<=pdts;i++)
	{
		if(!vis[pd[i]])
		{
			tot[pd[i]]++;
			vis[pd[i]]=1;
		}
	}
//	cout <<t <<endl;
//	for(int k=1;k<=pdts;k++) cout <<pd[k] <<' ';
//	cout <<endl;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n >>m;
	for(int i=1;i<=n;i++)
	{
		cin >>a[i];
	}
	for(int i=1;i<=n;i++) work(i);
	for(int i=1;i<=m;i++) cout <<tot[i] <<' ';
}