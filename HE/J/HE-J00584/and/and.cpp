#include<iostream>
using namespace std;
int n,m,ans;
int a[200005];
int shai[32];
int next[200005];
int tmp[200005];
int head=0,idx=0;
int len=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int k=a[i],j=1;k>0;k>>=1,j++)
		{
			if(k&1==1)shai[j]++;
		}
	}
	bool flag=0;
	for(int i=31;i>=0;i--)
	{
		if(i==0)
		{
			ans=a[head];
			for(int j=head,k=1;k<=m;k++,j=next[j])
			{
				ans&=a[j];
			}
			break;
		}
		if(shai[i]<m)continue;
		if(flag==0&&shai[i]==m)
		{
			for(int j=1;j<=n;j++)
			{
				if((a[j]&(1<<(i-1)))!=0)
				{
					if(head==0)
					{
						head=j;
						ans=a[j];
					}
					else
					{
						ans&=a[j];
					}
				}
			}
			break;
		}
		else if(flag==0&&shai[i]>m)
		{
			flag=1;
			for(int j=1;j<=n;j++)
			{
				if((a[j]&(1<<(i-1)))!=0)
				{
					if(head==0)
					{
						head=j;
						idx=j;
					}
					else
					{
						next[idx]=j;
						idx=j;
					}
				}
			}
			len=shai[i];
		}
		else
		{
			idx=head;
			int tphead=0;
			int s=0;
			for(int j=head;j!=0;j=next[j])
			{
				tmp[j]=0;
				if((a[j]&(1<<(i-1)))!=0)
				{
					if(s==0)
					{
						tphead=j;
					}
					else
					{
						tmp[idx]=j;
						idx=j;
					}
					s++;
				}
			}
			if(s==m)
			{
				head=tphead;
				ans=a[head];
				for(int j=head;j!=0;j=tmp[j])
				{
					ans&=a[j];
				}
				break;
			}
			else if(s<m||s==len)continue;
			else
			{
				for(int j=head;j!=0;j=next[j])
				{
					next[j]=tmp[j];
				}
				len=s;
				head=tphead;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
