#include<bits/stdc++.h>
using namespace std;
char a[16];
int main ()
{
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	char x,y;
	string b,c;//
	cin >> x>>b>>y>>c;
	
	a[x-1]=x;
	a[y-1]=y;
	if(a[x-1]==a[y-1])
	{
		cout << "1";
	}
	else
	{
		cout <<"0";
	}
	if(a[x-1]==a[y-1])
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	if(a[x-1]==a[y-1])
	{
		cout << "1";
	}
	else 
	{
		cout << "0";
	}
	if(a[x-1]==a[y-1])
	{
		cout << "1";
		
	}
	else
	{
		cout << "0";
		}	
	return 0;
 } 
