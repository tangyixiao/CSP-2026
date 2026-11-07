#include<bits/stdc++.h>
using namespace std;
string c[14];
string a,b,x,y;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++)
	{
		cin>>c[i];
	}
	a=c[2].substr(0,2);
	b=c[4].substr(0,2);
	x=c[2].substr(2,1);
	y=c[4].substr(2,1);
	if(c[1]==c[3])
	{
		cout<<"1";
		if(a==b)
		{
			cout<<"1";
			if((x=="A"||x=="B"||x=="C"&&y!="D"&&y!="F")&&(y=="A"||y=="B"||y=="C"&&x!="D"&&x!="F"))
			{
				cout<<"1";
				if((x=="A"&&y=="B")||(x=="B"&&y=="C"||y=="A")||(x=="C"&&y=="B")||(x=="D"&&y=="F"))
				{
					if((x=="F"&&y=="D"))
					{
						cout<<"1";
					}
				}
				else
				{
					cout<<"0";
				}
			}
			else
			{
				cout<<"0";
			}
		}
		else
		{
			cout<<"0";
		}
	}
	else
	{
		cout<<"0";
	}
	return 0;
}