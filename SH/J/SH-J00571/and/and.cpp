#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m,maxs=0,x=0,c=-1,d=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(x!=m-1)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				int sum=maxs;
				if(x==0) sum=a[i];
				sum=sum&a[j];
				maxs=max(maxs,sum);
			}
		}
		x++;
	}
	cout<<maxs;
	return 0;
}
