#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,a1,b,b1;
	cin >> a >> a1>>b>> b1;
	if(a == b)
	{
		cout << "1";
		if(a1[0] == b1[0]&&a1[1] == b1[1])
		{
			cout << "1";
			int z = a1[2];
			int z1 = b1[2];
			z -= 65;
			z1 -= 65;
			if(z < 3&&z1 < 3)
			{
				cout << "1";
				if(z+1 == z1||z-1== z1)
				{
					cout << "1";
				}
				else
				{
					cout << "0";
				}
			}
			else if(z> 2&&z1 > 2)
			{
				cout << "11";
			} 
			else
			{
				cout << "00";
			}
		}
		else
		{
			cout << "000";
		}
		
		
	}
	else
	{
		cout <<"0000";
	}
	return 0;
}
