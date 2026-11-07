#include <bits/stdc++.h>
using namespace std;
int R, X;
char sr[4], sx[4];

int main() {
	freopen("travel.in", "r", stdin);  
	freopen("travel.out", "w", stdout);
	if (R == X) 
	{
		cout << 1;
		if (sr[0] == sx[0] && sr[1] == sx[1]) 
		{
			cout << 1;
			if ((sr[2] <= 'C' && sx[2] <= 'C') || ((sr[2] > 'C' && sx[2] > 'C')))
			{
				cout << 1;
				if((sr[2]-sx[2] == 1)||(sr[2]-sx[2] == -1))
				{
					cout<<1;
				}
				else 
				{
					cout<<0;
				}
			}
			else 
			{
				cout << 0 << 0;
			}
		}
		else 
		{
			cout << 0 << 0 << 0;
		}
	} 
	else 
	{
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
}
