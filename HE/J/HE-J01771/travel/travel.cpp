#include<bits/stdc++.h>
using namespace std;
int r,x,a[4],b[4];
int main()
{
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	cin >> r;
	for(int i = 1; i <= 3; i++)
	{
		cin >> a[i];
	}
	cin >> x;
	for(int i = 1; i <= 3; i++)
	{
		cin >> b[i];
	}
	if(r != x)
	{
		cout << "0000";
		return 0;
	}
	else
	{
		cout << "1";
		if(a[1]==b[1]||a[2]==b[2])
		{
			cout << "1";
		}
		else
	    {
			cout << "0";
	    }
	}
	cout << "10";
	return 0;
}
