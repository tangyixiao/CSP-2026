#include<bits/stdc++.h>
using namespace std;
bool kk[700];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ss1,cc1,ss2,cc2;
	cin>>ss1>>cc1>>ss2>>cc2;
	
	kk[int('A')]=true;
	kk[int('C')]=true;
	kk[int('B')]=true;
	kk[int('F')]=false;
	kk[int('D')]=false;
	if(ss1!=ss2)
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	else
	{
		
		cout<<1;
		if(cc1[0]==cc2[0]&&cc1[1]==cc2[1])
		{
			
			cout<<1;
			if(kk[int(cc1[2])]==kk[int(cc1[2])])
			{
				cout<<1;
				if(kk[int(cc1[2])]==true)
				{
					if(abs(cc1[2]-cc2[2])==1)
					{
						cout<<1;
					}
					else cout<<0;
				}
				else
				{
					if(abs(cc1[2]-cc2[2])==2)
					{
						cout<<1;
						
					}
					else cout<<0;
				}
			}
			else
			{
				cout<<0<<0;
			}
		
		}
		else
		{
			cout<<0<<0<<0;
			return 0;
		}
	}
	
	return 0;
} 