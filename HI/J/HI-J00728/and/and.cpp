#include<bits/stdc++.h>
using namespace std;
int l[200005];
string turn_bin(int n,int dig)
{
	string res="";
	while(n!=0)
	{
		res=char(n%2+48)+res;
		n=floor(n/2.0);
	}
	int s=res.size();
	for(int i=1;i<=(dig-s);i++)
	{
		res='0'+res;
	}
	return res;
}
struct binary
{
	bool check=false;
	bool lc=false;
	string bnry;
}bin[200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>l[i];
	}
	sort(l+1,l+n+1,greater<int>());
	bin[1].bnry=turn_bin(l[1],-1);
	int d=bin[1].bnry.size();
	for(int i=2;i<=n;i++)
	{
		bin[i].bnry=turn_bin(l[i],d);
	}
	int less=n,lastl=n;
	for(int i=0;i<d;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(bin[j].bnry[i]!='1' && !bin[j].check)
			{
				less--;
				bin[j].check=true;
			}
		}
		if(less<m)
		{
			less=lastl;
			for(int j=1;j<=n;j++)
			{
				if(bin[j].check && !bin[j].lc)
				{
					bin[j].check=false;
				}
			}
		}
		else
		{
			lastl=less;
			for(int j=1;j<=n;j++)
			{
				if(bin[j].check && !bin[j].lc)
				{
					bin[j].lc=true;
				}
			}
		}
	}
	int sum=2147483647;
	for(int i=1;i<=n;i++)
	{
		if(!bin[i].check)
		{
			sum=sum & l[i];
		}
	}
	cout<<sum;
	return 0;
}
