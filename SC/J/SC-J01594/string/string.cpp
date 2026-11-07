#include<bits/stdc++.h>
using namespace std;
<stack> S;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	//freopen("string.in","r",stdin)
	//freopen("string.out","w",stdout)
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		char y;
		cin>>x>>y;
		for(int i=1;i<=x;i++)
		{
			S.pop(y);
		}
	}
	
	return 0;
}