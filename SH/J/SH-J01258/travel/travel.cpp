#include<bits/stdc++.h>
using namespace std;
string r1,r2,l1,l2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> l1 >> l2 >> r1 >> r2;
	if(l2[2] > r2[2])
	{
		swap(l1,r1);
		swap(l2,r2);
	}
	if(l1 == r1)cout << 1;
	else 
	{
		cout << "0000";
		return 0;
	}
	bool fl = 1;
	for(int i = 0;i < 2;i++)
	{
		if(l2[i] != r2[i])
		{
			cout << "000";
			return 0;
			fl = 0;
		}
	}
	if(fl)cout << 1;
	bool fl2 = 1;
	if(l2[2] == 'A' || l2[2] == 'B' || l2[2] == 'C')
	{
		if(r2[2] == 'A' || r2[2] == 'B' || r2[2] == 'C')
		{
			cout << 1;
			fl2 = 0;
		}
	}
	else if(l2[2] == 'D' || l2[2] == 'F')
	{
		if(r2[2] == 'D' || r2[2] == 'F')
		{
			cout << 1;
			fl2 = 0;
		}
	}
	if(fl2)
	{
		cout << "00";
		return 0;
	}
	bool fl3 = 1;
	if((l2[2] == 'A' && r2[2] == 'B') || (l2[2] == 'B' && r2[2] == 'C'))
	{
		fl3 = 0;
		cout << 1;
	}
	else if(l2[2] == 'D' && r2[2] == 'F')
	{
		fl3 = 0;
		cout << 1;
	}
	if(fl3)cout << 0;
	return 0;
}
