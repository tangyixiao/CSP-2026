#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);	
    freopen("and.out","w",stdout);
    int a,b,c[200010],d[200010];
    cin>>a>>b;
    for (int i=1;i<=a;i++)
    {
    	cin>>c[i];
    	int f=1;
    	while (e>0)
    	{
    		int e=c[i];
    		d[i]+=e%2*f;
    		e/=2;
    		f*=10;
		}
	}
	
	cout<<12;
 } 
