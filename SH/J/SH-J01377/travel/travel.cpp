#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=1000005;
LL a,b;
string a1,b1;
int solve(char x)
{
	if('A'<=x && x<='C')return 1;
	else return 2;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a>>a1>>b>>b1;
	if(a!=b)
	{
		cout<<"0000";
	}
	else
	{
		cout<<"1";
		string x="",y="";
		x=x+a1[0],y=y+b1[0];
		x=x+a1[1],y=y+b1[1];
		if(x!=y)
		{
			cout<<"000";
		}
		else
		{
			cout<<"1";
			if(solve(a1[2])!=solve(b1[2]))
			{
				cout<<"00";
			}
			else
			{
				cout<<"1";
				if((a1[2]+1)==b1[2] || (a1[2]-1)==b1[2])
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
