#include<iostream>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		if(n<=m)
		{
			n++;
		}
		for(int i=1;i<=m;i++)
		{
			n+=m;
		}
	}
	cout<<12;
	cout>>4;
	cout<<n;
	cout<<m;
	return 0;
}
