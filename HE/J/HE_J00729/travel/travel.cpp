#include<bits/stdc++.h>
using namespace std;
long long n,c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=1;i<=n;i++)
	{
		if(c1==c2&&s1==s2)
		{
			cout<<"1111";
		}else if(c1!=c2&&s1==s2)
		{
			cout<<"0101";
		}else if(c1==c2&&s1!=s2)
		{
			cout<<"1010";
		}else if(c1!=c2&&s1!=s2)
		{
			cout<<"0000";
		}
	}
	return 0;
}
