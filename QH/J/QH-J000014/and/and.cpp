#include<bits/stdc++.h>
using namespace std;

int a[100005];
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		int maxn=0;
		for(int i=1;i<=n;i++)
			maxn=max(a[i],maxn);
		cout<<maxn;
		return 0;
	} 
	int k=0,maxn=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			k=a[i]&a[j];
			maxn=max(k,maxn);
		}
	}
	cout<<maxn;
	return 0;
} 
