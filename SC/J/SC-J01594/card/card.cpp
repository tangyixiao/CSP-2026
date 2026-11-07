#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	//freopen("card.in","r",stdin)
	//freopen("card.out","w",stdout)
	int n,m,i,a;
	int s=0;
	cin>>n,m,i;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a==i)
		{
			s=s+1;
		}
	}
	cout<<s;
	return 0;
}