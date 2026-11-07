#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string a1,a,b1,b;
    cin>>a>>a1>>b>>b1;
    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    bool flag4 = false;
    if(a == b)
    {
    	flag1 = true;
	}
	if(flag1&&a1[0] == b1[0]&&b1[1] == a1[1])
	{
		flag2 = true;
	}
	char q = a1[2];
	char w = b1[2];
	if(flag2&&(((q=='A'||q=='B'||q=='C')&&(w=='A'||w=='B'||w=='C'))||((q=='D'||q=='E')&&(w=='D'||w=='E'))))
	{
		flag3 = true;
	}
	if(abs(int(q-w))==1&&flag3)
	{
		flag4 = true;
	}
	if(flag1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(flag2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(flag3)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(flag4)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
