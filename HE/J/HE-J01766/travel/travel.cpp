#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d;
char aa,bb;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	cin>>b;
	cin>>aa;
	cin>>c;
	cin>>d;
	cin>>bb;
	if (a==c)
	{
		cout << 1;
	}
	else
	{
		cout << "0000";
		return 0;
	}
	if (b==d)
	{
		cout << 1;
	}
	else
	{
		cout << "000";
		return 0;
	}
	if (aa=='A'||aa=='B'||aa=='C')
	{
		if (bb=='A'||bb=='B'||bb=='C')
		{
			cout <<1;
		}
		else
		{
			cout << "00";
			return 0;
		}
	}
	else if(aa=='D'||aa=='E')
	{
		if (bb=='D'||bb=='E')
		{
			cout << 1;
		}
		else 
		{
			cout << "00";
			return 0;
		}
	}
	if (bb-'0'==aa-'0'+1||aa-'0'==bb-'0'+1)
	{
		cout << 1;
	}
	else 
	{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
