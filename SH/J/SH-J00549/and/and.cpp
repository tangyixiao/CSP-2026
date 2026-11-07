#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[100005];
	string s[100005];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		
	}
	if(m==1)
	{
		sort(a,a+n);
		cout<<a[n];
		return 0;
	}
	sort(a,a+n);
	cout<<a[n-m];
	
	

	return 0;
}
