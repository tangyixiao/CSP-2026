#include<bits/stdc++.h>
using namespace std;
struct a
{
	int le;
	char en;
};
int main()
{
	freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	int n;
	int pl[2001];
	string p;
	cin>>n;
	a si[171];
	for(int i=0;i<n;i++)
	{
		cin>>si[i].le>>si[i].en;
	}
	pl[0]=0;
	pl[1]=si[0].le;
	for(int i=1;i<n;i++)
	{
		pl[i+1]=pl[i]+si[i].le;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=pl[i];j<pl[i+1];j++)
		{
			p[j]=si[i].en;
		//cout<<p[j];
		}
	}cout<<p[5];
	int av=pl[n];
	int cnt=0;
	if(av%2==0)
	{
		for(int i=0;i<av/2;i++)
		{
			if(p[av/2-i]!=p[av/2+i+1])
			{
				cnt++;
			}
		}
	cout<<cnt;
	}
	if(av%2!=0)
	{
		for(int i=1;i<=av/2;i++)
		{
			if(p[av/2+1-i]!=p[av/2+i+1])
			{
				cnt++;
			}
			//out<<cnt;
		}
	cout<<cnt;
	}
	
fclose(stdin);
	fclose(stdout); 
}
