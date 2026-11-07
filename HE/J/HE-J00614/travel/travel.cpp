#include<bits/stdc++.h>
using namespace std;
string sr,cr,sx,cx;
string a;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if(cr[0]==cx[0]&&cr[1]==cx[1])
	{
		a+='1';	
	}else{
		a+='0';
	}
	
	if(sr[0]==sx[0]&&sr[1]==sx[1])
	{
		a+='1';	
	}else{
		a+='0';
	}
	
	if((sx[2]>='A'&&sx[2]<='C'&&sr[2]>='A'&&sr[2]<='C')
	||(sx[2]>='D'&&sx[2]<='F'&&sx[2]>='D'&&sx[2]<='F'))
	{
		a+='1';	
		if(sx[2]-sr[2]==1||sx[2]-sr[2]==-1)
		{
			a+='1';
		}else{
			a+='0';
		}
	}else{
		a+="00";
	}
	cout<<a;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
