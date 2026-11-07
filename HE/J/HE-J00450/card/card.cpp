#include <bits/stdc++.h>
using namespace std;
int main()
{
	int card,m;
	cin>>card>>m;
	for(int b=1;b<=card;b++)
	{
		int n;
		cin>>n;
	}
	int num=0;
	int cnt = 0;
	bool s=true;
	int k;
	cin>>k;
	while(card>0)
	{
		for(int j=1;j<=card;j++)
		{
		    if(n!=k)
			{
				s==false;
			}
			else
			{
				s==true;
			}	
		}
		if(s==false)
		{
			n=n+k;
			cnt++;
		}
		else
		{
			for(int a=1;a<=card;a++)
			{
				if(n==k)
				{
					n=n-a;
					cnt--;
				}
			}
			n=n-k;
			cnt++;
		}
		card=card-cnt;
	}
	for(int i=1;i<=card;i++)
	{
		for(int v=i;v<=card;v++)
		{
		    if(n[i]==i)
		    {
			    num++;
		    }
		    cout<<num;
		    num=0;
	    }
	}
	return 0;
}
