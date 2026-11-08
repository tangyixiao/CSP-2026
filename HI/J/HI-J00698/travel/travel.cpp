#include<iostream>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,r,b,x;
	cin >> a >> r >> b >> x;
	if(a==b) 
	{
		if(r==x)
		{
			cout << 1111;
		}
		if(r>x) 
		{
			cout << 1110;
		}
    }
	return 0;
}
