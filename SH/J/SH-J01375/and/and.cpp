#include <bits/stdc++.h>

using namespace std;

int zong,tiao,max_;
long long bin[200005];
long long yuan[100005];

void become(int a)
{
	for(int i=1;i<=zong;i++)
	{
		for(int k=0;k<=yuan[i];k++)
			{
				bin[k]++;
				if(bin[k]>1)
				{
					bin[k-1]++;
					become(bin[k-1]);
				}
			}
	}
}

int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>zong>>tiao;
	for(int i=1;i<=zong;i++)
	{
		cin>>yuan[i];
	}
	for(int i=1;i<=zong;i++)
	{
		become(bin[1]);
	}
	max_=bin[3]&bin[1]&bin[2]&bin[4]&bin[5]&bin[6];
	for(int i=1;i<=zong;i++)
	{
		if(bin[zong]+bin[zong+1]+bin[zong+2]>max_)
		{
			max_=bin[zong]&bin[zong+1]&bin[zong+2]&bin[zong+3]&bin[zong+4]&bin[zong+5];
		}
	}
	cout<<max_;
	return 0;
}
