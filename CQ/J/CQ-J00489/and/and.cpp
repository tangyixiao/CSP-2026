#include<bits/stdc++.h>
using namespace std;
unsigned int a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	unsigned int ans=a[n];
	for(int i=n-1;i>n-m;i--)
	{
		ans&=a[i];
		cout<<ans<<endl;
		
	}
	cout<<ans;
	fclose(stdin);
  fclose(stdout);
	return 0;
}

