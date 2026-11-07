#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    string tr1,tr2,se1,se2;
    cin >> tr1 >> se1 >> tr2 >> se2;
    if(tr1==tr2)
    {
    	cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	
	if(se1[0]==se2[0]&&se2[1]==se1[1])
	{
		cout<<1;
		if(se1[2]>='A'&&se1[2]<='C'&&se2[2]>='A'&&se2[2]<='C')
		{
			cout<<1;
		}
		 else if(se1[2]>='D'&&se1[2]<='F'&&se2[2]>='D'&&se2[2]<='F')
		{
			cout<<1;
		}
		else {
			cout<<"00";
			return 0;
		}
	}
	else 
	{
		cout<<"000";
		return 0;
	}
	if(se1[2]+1==se2[2]||se1[2]-1==se2[2])
	{
		cout<<1;
	}
	else cout<<0;
	
	return 0;
 } 
