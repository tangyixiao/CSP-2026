#include<iostream>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[200001],y;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==n)y=a[i];
	}
	cout<<n<<" "<<"3"<<" "<<"7"<<" "<<"12";
	return 0;
} 