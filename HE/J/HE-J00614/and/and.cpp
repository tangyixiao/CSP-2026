#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans,cnt;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=1;i<=n-m+1;i++)
	{
		long long q=a[i];
		for(int j=i+1;j<m+i;j++)
		{
			q=q&a[j];//cout<<q<<endl;
		}//cout<<endl;
		ans=max(ans,q);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

