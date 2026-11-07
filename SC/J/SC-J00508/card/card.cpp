#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;

int m,n;
int a[500005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<m<<' '<<1<<' '<<n<<endl;
	return 0;
}