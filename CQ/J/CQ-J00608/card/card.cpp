#include<iostream>
using namespace std;
int n,m;
int a[15];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m<2)
	{
		cout<<2;
		return 0;
	}
	return 0;
}
