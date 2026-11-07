#include<bits/stdc++.h>
using namespace std;
char a[200005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int y=n%m;
	cout<<n/m<<n%m;
	return 0;
}
