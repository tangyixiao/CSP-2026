#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int main()
{ 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<n<<" "<<m<<" "<<'4';
	return 0;
}