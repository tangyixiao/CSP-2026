#include <bits/stdc++.h>
using namespace std;
long long c[200001],ans=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
		long long a,b;
		cin>>a>>b;
		for(int i=1;i<=a;i++)
		{
			cin>>c[i];
		}
		sort(c+1,c+a+1);
		for(int i=a;i>=a-b;i--)
		{
			ans=ans and c[i];
		}
		cout<<ans;
		return 0; 
} 
