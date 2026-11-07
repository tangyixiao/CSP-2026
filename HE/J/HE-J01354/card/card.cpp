#include <bits/stdc++.h>
using namespace std;

long long n,m;
int main()
{
	srand((long long)time(0));
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long a=1;a<=m;a++)
	{
		cout<<(rand()%n)+1<<" ";
	}
	return 0;
}
