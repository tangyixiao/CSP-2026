#include<bits/stdc++.h>
using namespace std;
int a[10000],n,m,b;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.ans","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-m;i++)
	{
		int v=a[i];
		for(int j=i+1;j<=i+m;j++)
		{
			v=v&a[j];
		}
		if(v>b)
		{
			b=v;
		}
	}
	cout<<b;
	return 0;
}
