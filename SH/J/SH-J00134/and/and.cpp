#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[10000010],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];	
	ans=max(a[i],ans);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
