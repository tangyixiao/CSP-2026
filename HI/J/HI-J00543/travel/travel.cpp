#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,x,y;
	cin>>a>>b>>x>>y;
	if(a==x)
	{
		if(b[0]==y[0]&&b[1]==y[1])
		{
			if( ( b[2]<='C' && y[2]<='C' ) || (b[2]>='D' && y[2]>='D') )
			{
				if( ( (y[2]-'A'-b[2]+'A'==1) || (b[2]-'A'-y[2]+'A'==1) ) && ( (y[2]-'A'+b[2]-'A'!=5) || (b[2]-'A'+y[2]-'A'!=5) ) )                 
				{
					cout<<"1111";
					return 0;
				}
				cout<<"1110";
				return 0;
			}
			cout<<"1100";
			return 0;
		}
		cout<<"1000";
		return 0;
	}
	cout<<"0000";
	return 0;
}
