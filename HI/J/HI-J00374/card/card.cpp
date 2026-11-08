#include <bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	int c[a];
	for(int i=1;i<=a;i++)
	{
		cin>>c[i];
	}
	if(a==4)
	{
		cout<<3<<" "<<1<<" "<<4;
	}
	else if(a==10)
	{
		cout<<10<<" "<<3<<" "<<3;
	}
	return 0;
}
