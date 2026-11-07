#include<bits/stdc++.h>
using namespace std;

struct w{
	long long a;
	char b;
}q[10000000];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int ok=0;
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>q[i].a>>q[i].b;
		if(q[i].b!=q[i-1].b&&i>=2)
		{
			ok=1;
		}
		sum+=q[i].a;
	}
	int mm=n;
	for(int i=1;i<=mm;i++)
	{
		if(q[i].b!=q[mm].b)
		{
			ok=1;
			break;
		}
		else
		{
			if(q[i].a!=q[mm].a)
			{
				ok=1;
				break;
			}
		}
		mm--;
	}
	long long ans=0;
	long long mid=0;
	long long p;
	long long l=1;
	long long r=sum;
	while(l<=r)
	{
		if(ok==1)
		{		
			if(q[l].b==q[r].b)
			{
				if(l==1)
				{				
					if(q[l].a>q[r].a)
					{
						ans+=q[l].a-q[r].a;
						mid=q[l].a-q[r].a;
						p=1;
					}
					if(q[l].a<q[r].a)
					{
						ans+=q[r].a-q[l].a;
						mid=q[r].a-q[l].a;
						p=0;
					}
				}
				else
				{
					if(p==1)
					{				
						if(q[r].a-mid>0)
						{
							if(q[l].a>q[r].a-mid)
							{
								ans+=q[l].a-q[r].a;
								mid=q[l].a-q[r].a;
								p=1;
							}
							if(q[l].a<q[r].a-mid)
							{
								ans+=q[r].a-q[l].a;
								mid=q[r].a-q[l].a;
								p=0;
							}
						}
						else mid-=q[r].a;
					}
					else
					{
						if(q[l].a-mid>0)
						{
							if(q[l].a-mid>q[r].a)
							{
								ans+=q[l].a-q[r].a;
								mid=q[l].a-q[r].a;
								p=1;
							}
							if(q[l].a-mid<q[r].a)
							{
								ans+=q[r].a-q[l].a;
								mid=q[r].a-q[l].a;
								p=0;
							}
						}
						else mid-=q[l].a;
					}
				}
			}
			else 
			{
				if(l==1)
				{				
					if(q[l].a>q[r].a)
					{
						ans+=q[l].a-q[r].a;
						mid=q[l].a-q[r].a;
						p=1;
					}
					if(q[l].a<q[r].a)
					{
						ans+=q[r].a-q[l].a;
						mid=q[r].a-q[l].a;
						p=0;
					}
					if(q[l].a==q[r].b)
					{
						ans+=q[l].a;
						mid=0;
						p=0;
					}
				}
				else
				{
					if(p==1)
					{				
						if(q[r].a-mid>0)
						{
							if(q[l].a>q[r].a-mid)
							{
								ans+=q[l].a-q[r].a;
								mid=q[l].a-q[r].a;
								p=1;
							}
							if(q[l].a<q[r].a-mid)
							{
								ans+=q[r].a-q[l].a;
								mid=q[r].a-q[l].a;
								p=0;
							}
							if(q[l].a==q[r].b-mid)
							{
								ans+=q[l].a;
								mid=0;
								p=0;
							}
						}
						else mid-=q[r].a;
					}
					else
					{
						if(q[l].a-mid>0)
						{	
							if(q[l].a-mid>q[r].a)
							{
								ans+=q[l].a-q[r].a;
								mid=q[l].a-q[r].a;
								p=1;
							}
							if(q[l].a-mid<q[r].a)
							{
								ans+=q[r].a-q[l].a;
								mid=q[r].a-q[l].a;
								p=0;
							}
							if(q[l].a-mid==q[r].b)
							{
								ans+=q[l].a-mid;
								mid=0;
								p=0;
							}
						}
						else mid-=q[l].a;
					}
				}
			}
			l++;
			r--;
		}
		else 
		{
			cout<<0;
			return 0;
		}
	}
	cout<<ans;
	return 0;
}