#include<bits/stdc++.h>
using namespace std;
int a[1000000],t[1000000];
struct num{
	int n;
	int ans;
};
num b[10000];
int main()
{
	freopen("card.in","r","in");
	freopen("card.out","w","out"); 
    int n,m,t=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]>a[i+1])t++;
	}
	if(t==(n-1)){
		for(int i=1;i<=n;i++)
		{
			cout<<n<<" ";
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			if(a[i]==j)
			{
				b[a[i]].n++;
			}
		}
	}
		for(int i=2;i<=n-1;i++)
	{
		b[i].ans=b[i].n;
	}
	b[a[n]].ans=n;
	b[a[1]].ans=m;

	for(int i=1;i<=m;i++)
	{
		cout<<b[i].ans<<" ";
	}
	return 0;
}