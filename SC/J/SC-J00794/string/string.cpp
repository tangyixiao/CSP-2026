#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
//int map[10];
//char mc[10];
int map[216210];
char mc[216210];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long total=0;
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>map[i]>>mc[i];
		total+=map[i];
		
	}
	long long t=total/2;
	int tt=0;
	if(total%2==1)
	{
		tt=1;
	}
	long long b=0;
	int emp=0;
	long long at=0,bt=0;
	int n=a;
	int i=0;
	while(at<tt+t)
	{
		int t1=i,t2=a-1-emp;
		{

		}
		if(map[t2]>=map[i])
		{
			at+=map[i];
			bt+=map[i];
			if(mc[t1]!=mc[t2])
			{
				b+=map[t1];
			}
			map[t2]-=map[t1];
			map[t1]=0;
			i++;
			if(map[t2]==0)
			{
				emp++;
			}
		}
		else if(map[t2]<map[i])
		{
			at+=map[t2];
			bt+=map[t2];
			if(mc[t1]!=mc[t2])
			{
				b+=map[t2];
			}
			map[t1]-=map[t2];
			map[t2]=0;
			emp++;
			
		}
		
	}
	cout<<b;
	return 0;
}