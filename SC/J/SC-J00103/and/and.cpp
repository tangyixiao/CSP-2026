#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	
	vector<int>a(n);
	
	for(int i = 0;i<n;++i)
	{
		cin>>a[i];
	}
	
	sort(a.begin(),a.end());
	
	long long ans = a[n-1];
	for(int i = n-2;i>n-m-1;--i)
	{
		ans = ans&a[i];
	}
	
	cout<<ans<<endl;
	
	return 0;
}