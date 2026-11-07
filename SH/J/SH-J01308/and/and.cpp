#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	
	cin>>n>>m;
	int maxn=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==2)
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
			{
				maxn=max(maxn,a[i]&a[j]);
			}
		cout<<maxn;
		return 0;
	}
	else{
		for(int i=1;i<=n;i++)
		{
			maxn=max(maxn,a[i]);
			cout<<maxn;
			return 0;
		}
	}
	return 0;
}

