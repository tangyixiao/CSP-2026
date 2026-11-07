#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	int c1,c2;
	char s1[5],s2[5];
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1==c2)
	{
		cout<<1;
		if(s1[3]==s2[3])
		{
			cout<<1;
			if( (s1[3]-s2[3]<=2) || (s2[3]-s1[3]<=2) && ( (s1[3]!='C') && (s2[3]!='D') ) || ( (s1[3]!='C') && (s2[3]!='D') )  )
			{
				cout<<1;
				if((s1[3]-s2[3]==1)||(s2[3]-s1[3]==1)||((s1[2]-s2[2]<=17)||(s2[2]-s1[2]<=17))&&((s1[3]-s2[3]==1)||(s2[3]-s1[3]==1))) cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
} 
