#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N=1e5*5;
int n,m;
int a[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<n<<" ";
	for(int i=1;i<=m-1;i++)
	{
		cout<<m<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
