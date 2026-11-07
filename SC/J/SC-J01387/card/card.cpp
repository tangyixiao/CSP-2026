#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		long long num=n,num2=-1,sum[N]={0};
		bool b[N]={0};
		for(int j=n;j>=i;j--)
		{
			if(b[a[j]]==0)
			{
				b[a[j]]=1;
				sum[a[j]]=j+1;
			}
			else
			{
				num=j;
				bool b[N]={0};
				b[a[j]]=1;
				num2=max(num2,sum[a[j]]);
			}
		}
		for(int k=i;k<=num;k++)
			ans[a[k]]++;
		if(num2!=-1) 
			for(int k=num2;k<=n;k++)
				ans[a[k]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
}