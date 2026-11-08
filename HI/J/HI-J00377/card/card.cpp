#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
	freopen("card.in","w",stdin);
	freopen("card.out","r",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<a[0]+a[1]<<" "<<a[0]+a[1]+a[2]<<" "<<a[3]; 
	
	return 0; 
} 
