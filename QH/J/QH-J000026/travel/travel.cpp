#include<bits/stdc++.h> 
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
 	int n[10], m[10];
 	cin >> n >> m;
 	if(n[2] != m[2])
 	{
 		cout << 0000;
	}
	else if(n[5] != m[5])
	{
		cout << 1000;
	}
	else if(n[6]+3 >= m[6])
	{
		cout << 1100;
	}
	else if(n[7] +1 != m[6])
	{
		cout << 1110;
	}
	else
	{
		cout << 1111;
	}
	return 0;
}
