#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string z1,z2;
	cin>>c1>>z1>>c2>>z2;
	if(c1 == c2)
	{
		cout<<'1';
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(z1[0] == z2[0] && z1[1] == z2[1])
	{
		cout<<'1';
	}
	else
	{
		cout<<'0';
	}
	int flag = 0;
	if((z1[2] == 'A' || z1[2] == 'B' || z1[2] == 'C') && (z2[2] == 'A' || z2[2] == 'B' || z2[2] == 'C'))
	{
		flag = 1;
	}
	if((z1[2] == 'D' || z1[2] == 'E') && (z2[2] == 'D' || z2[2] == 'E'))
	{
		flag = 1;
	}
	if(z1[0] == z2[0] && z1[1] == z2[1] && flag == 1)
	{
		cout<<'1';
	}
	else
	{
		cout<<'0';
	}
	if(z1[0] == z2[0] && z1[1] == z2[1] && flag == 1 && ((z1[2] == 'D' && z2[2] == 'F') || (z1[2] == 'F' && z2[2] == 'D')))
	{
		cout<<'1';
	}
	else
	{
		if(z1[0] == z2[0] && z1[1] == z2[1] && flag == 1 && abs(z1[2] - z2[2]) == 1 && (z1[2] != 'C' && z2[2] != 'D') && (z1[2] != 'D' && z2[2] != 'C'))
		{
			cout<<'1';
		}
		else
		{
			cout<<'0';
		}
	}
	return 0;
}
