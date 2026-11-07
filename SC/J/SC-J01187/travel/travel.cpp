#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	vector<char> v(10);
	for(int i=0;i<10;i++)
	{
		cin>>v[i];
	}
		if(v[1]==v[6])
		{
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		if(v[3]==v[8])
		{
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		if(v[4]-v[9]==1||v[9]-v[4]==1)
		{
			if(v[4]!='D'||v[4]!='C')
			{
				cout<<"11";
			}
		}
		else
			{
				if(v[4]=='A'&&v[9]=='C'||v[4]=='C'&&v[9]=='A')
				{
					cout<<"10";
				}
				else
				{
					cout<<"00";
				}
			}
	return 0;
} 
