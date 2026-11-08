#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin.tie(0);
	cout.tie(0);
	
	string car1 ,car2;
	string h1,h2; 
	cin >> car1 >> h1 >> car2 >> h2;
	bool t1,t2;
	int hang1,hang2;
	if(h1[2] == 'A')
	{
		t1 = false;
		hang1 = 1;
	}
	else if(h1[2] == 'B')
	{
		t1 = false;
		hang1 = 2;
	}
	else if(h1[2] == 'C')
	{
		t1 = false;
		hang1 = 3;
	}
	else if(h1[2] == 'D')
	{
		t1 = true;
		hang1 = 5;
	}
	else if(h1[2] == 'F')
	{
		t1 = true;
		hang1 = 6;
	}
	
	if(h2[2] == 'A')
	{
		t2 = false;
		hang2 = 1;
	}
	else if(h2[2] == 'B')
	{
		t2 = false;
		hang2 = 2;
	}
	else if(h2[2] == 'C')
	{
		t2 = false;
		hang2 = 3;
	}
	else if(h2[2] == 'D')
	{
		t2 = true;
		hang2 = 5;
	}
	else if(h2[2] == 'F')
	{
		t2 = true; 
		hang2 = 6;
	}
		
	string lie1,lie2;
	lie1 = h1[0];
	lie1 += h1[1];
	lie2 = h2[0];
	lie2 += h1[1];
	if(car1 != car2)
	{
		cout << "0000";
		return 0; 
	}
	if(car1 == car2)
	{	
		cout << 1;
		if(lie1 == lie2)
		{
			cout << 1;
			if(t1 == t2)
			{
				cout << 1;
				if(hang1 - hang2 == -1 || hang1 - hang2 == 1)
				{
					cout << 1;
				}
				else if(hang1 - hang2 != -1 || hang1 - hang2 != 1)
				{
					cout << 0;
				}
			}
			else if(t1 != t2)
				cout << "00";
		}
		else if(lie1 != lie2)
			cout << "000";
	}
	return 0;
}
