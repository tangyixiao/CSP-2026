#include<bits/stdc++.h>
using namespace std;
long long n,m,lr[10006],rl[10006];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>rl[i];
		lr[rl[i]]++;
	}
	cout<<lr[rl[1]]<<" ";
	for(int i=2;i<=n;i++)
	{
		cout<<" "<<lr[rl[i-1]]+lr[rl[i]];
		lr[rl[i]]=lr[rl[i-1]]+lr[rl[i]];
	}
	return 0;
}
// 1 2 3

