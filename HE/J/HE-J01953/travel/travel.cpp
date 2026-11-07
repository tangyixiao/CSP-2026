#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	vector<string> r(2);
	vector<string> x(2);
	for (int i = 0; i < 2; i++)
	{
		cin>>r[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cin>>x[i];
	}
	if(r[0] == x[0])
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000"<<'\n';
		return 0;
	}
	bool yes = true;
	for(int i = 0; i < 2; i++)
	{
		if(r[1][i] != x[1][i])
		{
			cout<<"000"<<'\n';
			yes = false;
			break;
		}
	}
	if(yes)
	{
		cout<<"1";
		char R = r[1][2];
		char X = x[1][2];
		if((R <= 'C' && X <= 'C') || (R >= 'D' && X >= 'D'))
		{
			cout<<"1";
			int b = abs((int)(R-'A')-(int)(X-'A'));
			if(b <= 1)
			{
				cout<<"1"<<'\n';
			}
			else
			{
				cout<<"0"<<'\n';
			}
		}
		else
		{
			cout<<"00"<<'\n';
		}
	}
	return 0;
}
