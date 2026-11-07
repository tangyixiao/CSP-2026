#include<bits/stdc++.h>
using namespace std;
char ax,bx,cx,dx,fx,ay,by,cy,dy,fy;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	cin>>ax>>bx>>cx>>dx>>fx>>ay>>by>>cy>>dy>>fy;
	if(ax==ay && bx==by)
	{
		cout<<"1";
		if (cx==cy && dx==dy)
		{
			cout<<"1";
			if (fx=='A')
			{
				if (fy=='B')
				{
					cout<<"11";
				}
				else if (fy=='C')
				{
					cout<<"10";
				}
				else
				{
					cout<<"00";
				}
			}
			if (fx=='B')
			{
				if (fy=='A')
				{
					cout<<"11";
				}
				else if (fy=='C')
				{
					cout<<"11";
				}
				else
				{
					cout<<"00";
				}
			}if (fx=='C')
			{
				if (fy=='B')
				{
					cout<<"11";
				}
				else if (fy=='A')
				{
					cout<<"10";
				}
				else{
					cout<<"00";
				}
			}if (fx=='D')
			{
				if (fy=='F')
				{
					cout<<"11";
				}
				else{
					cout<<"00";
				}
			}if (fx=='F')
			{
				if (fy=='D')
				{
					cout<<"11";
				}
				else{
					cout<<"00";
				}
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
	
}