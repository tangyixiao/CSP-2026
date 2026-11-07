#include<bits/stdc++.h>
using namespace std;


int d[10000005];

long long cnt,ad;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,a,b;
    cin>>n;
    for(int i=1;i<=3*n;i++)
	{
		cin>>a>>b;
		for(int j=1;j<=a;j++)
		{
			ad++;
			d[ad]=b;
		}
	} 
	long long bd=ad;
    for(int i=1;i<=bd/2;i++)
    {
    	if(d[bd]!=d[ad])
    	{
    		cnt++; 
		}
		ad--;
	}
	cout<<cnt;
	return 0;
}
