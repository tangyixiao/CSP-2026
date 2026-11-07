#include<bits/stdc++.h>
using namespace std;
int num,sum,dum=1,hum;
char byl[10003];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>num;
	for(int i=1;i<=num;i++)
	{
	    int aa1;
	    char bb1;
	    cin>>aa1>>bb1;
	    for(int i=1;i<=aa1;i++)
	    {
	        byl[dum]=bb1;
	    	sum++;
	    	dum++;
	    }
	}
	if(sum%2==0)
	{
		int mid=sum/2,sid=sum/2+1;
		if(byl[mid]!=byl[sid])
		{
			hum++;
		}
		for(int i=1;i<=sum/2-1;i++)
		{
			if(byl[mid-1]!=byl[sid+1])
			{
				hum++;
			}
			mid-=1;
			sid+=1;
		}
	}
	else
	{
		int mid=sum/2,sid=sum/2+2;
		for(int i=1;i<=sum/2;i++)
		{
			if(byl[mid]!=byl[sid])
			{
				hum++;
			}
			mid-=1;
			sid+=1;
		}
	}
	cout<<hum;
	return 0;
}
