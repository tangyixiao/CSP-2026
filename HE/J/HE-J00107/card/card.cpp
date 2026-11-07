#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n,m;
const ll N=(1e5)*5+5;
ll b[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=m;i++)
	{
		cout<<n<<" ";
	}
	return 0;
 } 
