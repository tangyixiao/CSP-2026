#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n,m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int x=0;
    for(int i=1;i<=n*m;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		b[x]=a[i]&a[i+j];
    		x++;
		}
	}
	sort(b+1,b+x+1);
	cout<<b[1];
   return 0;
}
		
