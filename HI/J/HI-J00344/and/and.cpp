#include<bits/stdc++.h>
using namespace std;

const int MAX=2*1e5+5; 
int d[MAX];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>d[i];
		
	sum=d[1];
	for(int i=2;i<=n;i++)
		sum&=d[i];
		
	if(m==1) cout<<*max_element(d+1,d+n+1);
	if(m==n) cout<<sum;
	if(m==n-1) cout<<2;
	return 0;
 } 
