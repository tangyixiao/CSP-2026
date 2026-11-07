#include<bits/stdc++.h>
#define int long long
using namespace std;
string c_1,s_1,c_2,s_2,x_r,x_x,ch_1,ch_2;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_1>>s_1>>c_2>>s_2;
	if(c_1==c_2)
	{
		cout<<1;
		x_r=s_1[0]+s_1[1];
		x_x=s_2[0]+s_2[1];
		if(x_r==x_x)
		{
			cout<<1;
			ch_1=s_1[2];
			ch_2=s_2[2];
			if((ch_1=="A"||ch_1=="B"||ch_1=="C")&&(ch_2=="A"||ch_2=="B"||ch_2=="C"))
			{
				cout<<1;
				if((ch_1=="A"&&ch_2=="B")||(ch_1=="B"&&ch_2=="C")||(ch_2=="A"&&ch_1=="B")||(ch_2=="B"&&ch_1=="C"))
				{
					cout<<1;
				}
				else
				{
					cout<<0;
				}
			}
			else if((ch_1=="D"||ch_1=="F")&&(ch_2=="D"||ch_2=="F"))
			{
				cout<<"11";
			}
			else
			{
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000"; 
	}
	return 0;
}