#include<bits/stdc++.h>
using namespace std;
char hyw[200005];
int hyh[200005];
int pan(int n)
{
	int cha=0;int cntt=0;int k=1;
	for(int i=1;i<=n;i++)
	{
		cha=abs(hyw[i]-hyw[n-i+k]);
		if(hyh[i]!=hyh[n-i+k])
		{
			
			if(hyw[i]==hyw[n-i+k])
			{
				cntt+=hyw[i];
				
			}
			cntt+=(max(hyw[i],hyw[n-i+k])-cha);
		}
		while(cha!=0)
		{
			if(hyw[i]>hyw[n-i+k])
			{
				k--;
				if(hyw[n-i+k]>=cha)
				{
					hyw[n-i+k]-=cha;
					cha=0;
				}
				else cha-=hyw[n-i+k];
			}
			else if(hyw[i]<hyw[n-i+k]){
				i++;
				if(hyw[i]>=cha)
				{
					hyw[i]-=cha;
					cha=0;
				}
				else cha-=hyw[i];
			}
		}
		
	}
	return cntt;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s;
	for(int i=1;i<=n;i++)
	{
		int a;cin>>a;char c;cin>>c;
		hyw[i]=a;hyh[i]=c;
	}
	int l=s.size()/2;
	int mid;
	if(s.size()%2==0) mid=s.size()/2+1;
	else mid=s.size()/2+1;
	int cnt;
	cnt=pan(n);
	cout<<cnt;
	return 0;
}
