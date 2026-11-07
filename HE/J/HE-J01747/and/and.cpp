#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int b[n+5];
	for(int i=1;i<=n;i++)
	{
		a[i]=0;
	}

	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
    }
    cout<<b[n-m+1];
	
	
	
	
	return 0;
	
	
	
}
 
