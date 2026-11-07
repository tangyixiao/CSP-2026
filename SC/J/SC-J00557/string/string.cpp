#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int n;
long long cnt;

struct aox
{
	long long s;
	char c;
}a[N],b[N]; 	

int vis[200];

int main()
{
	freopen("string.in", "r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=0;i<n;i++)	cin>>b[i].s>>b[i].c; 
	
	int j=0;
	for(int i=0;i<n;i++)
	{
		a[j].c=b[i].c;
		while(b[i].c==a[j].c)	
		{
			a[j].s+=b[i].s;
			i++;
		}
		i--;
		j++;
	}
	
	int l,r;
	l=0,r=j-1;
	
	while(l<r)
	{
		if(a[l].c==a[r].c)
		{
			if(a[l].s==a[r].s)	
			{
				l++,r--;
				continue;
			}
			else
			{
				cnt+=abs(l-r);				
				l++,r--;
			}
		} 
		else	
		{
			if(a[l].s==a[r].s)	
			{
				cnt+=a[r].s;
				l++,r--;
			}
			else
			{
				if(a[l].s<a[r].s)
				{
					cnt+=a[l].s;
					a[r].s-=a[l].s;
					l++;
				}
				else
				{
					cnt+=a[r].s;
					a[l].s-=a[r].s;
					r--;
				}
			}
		}
	}
	
	//for(int i=0;i<j;i++)	cout<<a[i].s<<a[i].c<<endl;
	cout<<cnt;
	
	return 0;
} 	