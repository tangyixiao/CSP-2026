#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[1000000],b[1000000],num[1000000],place[1000000],final_num[1000000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
		
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=i;j<=m+1;j++)
		{
			b[j]=a[j];
			num[b[j]]++;
			if(num[b[j]]==2)
			{
				for(int k=place[b[j]]+1;k<=j;k++)
				{
					num[b[k]]--;
					b[k]=0;
				}
			}
			else place[b[j]]=j;
			//在这里---------
			//for(int k=1;k<=20;k++)
			//{
			//	cout<<b[k]<<" ";
			//} 
			//cout<<"(";
			//for(int k=1;k<=m;k++)
			//{
			//	cout<<num[k]<<" ";
			//}
			//cout<<")";
			//cout<<endl;
			//在这里 --------
		}
		for(int j=1;j<=m;j++)
		{
			final_num[j]+=num[j];
			num[j]=0;
			b[j]=0;
			place[j]=0;
		}
		//cout<<"---------------------------------------------"<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<final_num[i]<<" ";
	}
	return 0;
}
