#include<bits/stdc++.h>
using namespace std;
char s[3],c[3];
int main()
{
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	cin>>c[1]>>s[1]>>c[2]>>s[2];
	if(c[1]==c[2])
	{
		cout<<1100;
	}
	else
	{
		cout<<0000;
	}
	return 0;
}
