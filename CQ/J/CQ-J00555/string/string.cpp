#include<bits/stdc++.h>
using namespace std;
long long sum,n;
struct cmp{
	int a;
	char b;
}u[300000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>u[i].a>>u[i].b;
	}
	for(int i=1,j=n;i<j;)
	{
		if(u[i].b!=u[j].b)
		{
			if(u[i].a>=u[j].a)
			{
				u[i].a-=u[j].a;
				sum+=u[j].a;
				j--;
			}
			else if(u[i].a<u[j].a)
			{
				u[j].a-=u[i].a;
				sum+=u[i].a;
				i++;
			}
		}
		else
		{
			if(u[i].a==u[j].a)
			{
				i++,j--;
			}
			else
			{
				if(u[i].a>u[j].a)
				{
					u[i].a-=u[j].a;
					j--;
				}
				else
				{
					u[j].a-=u[i].a;
					i++;
				}
			}
		}
	}
	cout<<sum;
	return 0; 
 } 
