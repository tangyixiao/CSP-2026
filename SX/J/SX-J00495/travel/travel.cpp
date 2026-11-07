#include<bits/stdc++.h>
using namespace std;
string aa,aa2,bb,bb2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>aa>>aa2>>bb>>bb2;
	if(aa==bb)
	{
		cout<<"1";
		if(aa2[0]==bb2[0]&&aa2[1]==bb2[1])
		{
			cout<<"1";
			if(aa2[2]<='C'&&bb2[2]<='C')
			{
				cout<<"1";
				if(aa2[2]+1==bb2[2]&&aa2[2]!='C')
				{
					cout<<"1";
				}
				else if(bb2[2]+1==aa2[2]&&bb2[2]!='C')
				{
					cout<<"1";
				}
				else cout<<"0";
			}
			else if(aa2[2]>='D'&&aa2[2]<='F'&&bb2[2]>='D'&&bb2[2]<='F')
			{
				cout<<"11";
			}
			else
			{
				cout<<"00";
			}
		}
		else cout<<"000";
	}
	else cout<<"0000";

	return 0;
}