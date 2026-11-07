#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r,x;
	string rz,xz;
	cin>>r>>rz>>x>>xz;
	if(r!=x)
	{
		cout<<"0000";
	}
	else
	{
		cout<<"1";
		if(rz[0]+rz[1]!=xz[0]+xz[1])
		{
			cout<<"000";
		}
		else
		{
			cout<<"1";
			if(!(rz[2]<='C'&&xz[2]<='C')||(rz[2]>='D'&&xz[2]>='D'))
			{
				cout<<"00";
			}
			else
			{
				cout<<"1";
				if((rz[2]==xz[2]+1)||(rz[2]==xz[2]-1)) cout<<"1";
				else cout<<"0";
			}
		}
	}
	return 0;
}