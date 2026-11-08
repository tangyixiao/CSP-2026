#include<bits/stdc++.h>
using namespace std;
int n,m,w,num; 
int minn=10000000;
long long a[500005],c[500005];
int cnt;
bool cmp(int a,int b)
{
	return a<b;
}
int main(){
   	freopen("crystal.in", "r", stdin);
    freopen("crystal.out", "w", stdout);
	cin >> n>> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
		c[i]=a[i];
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++)
	{
		cnt+=a[i];
	}
	int b;
	b=cnt/n;
	for (int i=1;i<=n;i++)
	{
		c[i]-=b;
		if (c[i]<0)
		{
			c[i]=0-c[i];
		}		
	}	
	while(m--)
	{
		for (int i=1;i<=n;i++)
		{
			if(c[i]==0)
				continue;
			if(c[i]<minn) 
			{
				minn=c[i];
				w=i;
			}
		}
		minn=10000000;
		c[w]--;
	};
	for (int i=1;i<=n;i++)
	{
		if (c[i]==0)
		{
			num+=1;
		}
	}
	cout << num;
	return 0;
}
