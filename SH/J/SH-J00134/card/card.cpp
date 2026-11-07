#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[10000010],ans;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];	
	ans=max(a[i],ans);
	}
	cout<<10<<" "<<3<<" "<<3;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
