#include<bits/stdc++.h>
using namespace std;
bool ans[4] = {1,1,1,1};

void check (string a1,string a2,string b1,string b2)
{
	if(a1=="01"||a1=="16"||b1=="01"||b1=="16")
	{
		ans[0]=0;
		ans[1]=0;
		ans[2]=0;
		ans[3]=0;
		return;
	}
	if(a1!=b1)
	{
		ans[0]=0;
		ans[1]=0;
		ans[2]=0;
		ans[3]=0;
		return;
	}
	string z1="",z2="";
	z1+=a2[0];
	z1+=a2[1];
	z2+=b2[0];
	z2+=b2[1];
	if(z1!=z2)
	{
		ans[1]=0;
		ans[2]=0;
		ans[3]=0;
		return;
	}
	char a = a2[2],b=b2[2];
	if(a=='A')
	{
		if(b=='B')
		{
			ans[3]=1;
			ans[2]=1;
			return;
		}
		else if(b=='C')
		{
			ans[3]=0;
			ans[2]=1;
			return;
		}
		else
		{
			ans[3]=0;
			ans[2]=0;
			return;
		}
	}
	if(a=='B')
	{
		if(b=='A')
		{
			ans[3]=1;
			ans[2]=1;
			return;
		}
		else if(b=='C')
		{
			ans[3]=1;
			ans[2]=1;
			return;
		}
		else
		{
			ans[3]=0;
			ans[2]=0;
			return;
		}
	}
	if(a=='C')
	{
		if(b=='B')
		{
			ans[3]=1;
			ans[2]=1;
			return;
		}
		else if(b=='A')
		{
			ans[3]=0;
			ans[2]=1;
			return;
		}
		else
		{
			ans[3]=0;
			ans[2]=0;
			return;
		}
	}
	if(a=='D')
	{
		if(b=='F')
		{
			ans[3]=1;
			ans[2]=1;
			return;
		}
		else
		{
			ans[3]=0;
			ans[2]=0;
			return;
		}
	}
	if(a=='F')
	{
		if(b=='D')
		{
			ans[3]=1;
			ans[2]=1;
			return;
		}
		else
		{
			ans[3]=0;
			ans[2]=0;
			return;
		}
	}
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin >> a1 >> a2 >> b1 >> b2;
	check(a1,a2,b1,b2);
	for(int i = 0;i<4;i++)
	{
		cout << ans[i];
	}
	return 0;
}
