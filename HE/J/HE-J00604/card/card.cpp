#include<bits/stdc++.h>
using namespace std;
int n,m,yi=0,er=0,yide,erde;
int a[15];
int main()
{
	freopen("card.in","r",stdin);
	freopen("crad.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(yi==0)
		{
			yi==x;
			if(yi==1)
			{
				yide++;
			}
			else
			{
				erde++;
			}
		}
		else if((er==0)&&(yi!=er))
		{
			er=x;
			yide++;
			erde++;
		}
		else
		{
			if(x==yi)
			{
				yi=0;
			}
			else if(x==er)
			{
				er==0;
				if(yi==1)
				{
					yide++;
				}
				else
				{
					erde++;
				}
			}
			else
			{
				yide++;
				erde++;
			}
		}
	}
	cout<<yide<<' '<<erde;
	return 0;
}
