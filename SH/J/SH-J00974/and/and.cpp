#include <bits/stdc++.h>
using namespace std;

const int L=2e5+5;
int a[L]={};

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	long long n,m;
	long long ans;
	cin>>n>>m;
	
	
	//cout<<n<<" "<<m<<'\n';
	//return 0;
	
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	sort(a+1,a+1+n,greater<int>());
	ans=a[1];
	
	//cout<<"Debug : min(m,n) = "<<min(m,n)<<"\n";
	
	for (int i=2;i<=m;i++)
	{
		if (i>n)
		{
			break;
		}
		ans&=a[i];
		//cout<<ans<<" ";
	}
	
	cout<<ans;
	return 0;
}
