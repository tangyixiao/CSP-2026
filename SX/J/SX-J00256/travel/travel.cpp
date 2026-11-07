#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c1,s1,c2,s2,p1,p2;
int z1,z2;
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) 
	{
		cout<<"0000";
		return 0;
	} 
	else 
	{
		cout<<"1";
		p1=s1.substr(0,2);
		p2=s2.substr(0,2);
		if(p1!=p2) 
		{
			cout<<"000";
			return 0;
		} 
		else 
		{
			cout<<"1";
			z1=s1[2]-'A';
			z2=s2[2]-'A';
			if((z1<=2&&z2<=2)||(z1>3&&z2>3)) 
			{
				cout<<"1";
				if((z1==z2+1)||(z1==z2-1)) cout<<"1";
				else cout<<"0";
			} 
			else 
			{
				cout<<"00";
				return 0;
			}
		}
	}
	return 0;
}