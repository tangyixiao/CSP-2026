#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+5;

int n;

int siz=0,tp=0,ans=0;
int num[N],bnum[N];
int wd[N];

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;	
	int tmp,st=1;
	char tmpp;
	for(int i=1;i<=n;i++)
	{
		cin>>tmp>>tmpp;
		siz+=tmp;
		num[i]=tmp;
		wd[i]=tmpp-'a'+1;
		bnum[i]+=bnum[i-1]+tmp;
	}
	bool fA=1;
	for(int i=1;i<n;i++)
	{
		if(wd[i]!=wd[i+1])
		{
			fA=0;
		}
	}
	if(fA)
	{
		cout<<0;
		return 0; 
	}
	int kr=siz/2;
	int mid=upper_bound(bnum+1,bnum+n+1,kr)-bnum;
//	cout<<"mid:"<<mid<<'\n';
	if(siz%2)
	{
		num[mid]--;
	}
	if(bnum[mid]-siz/2!=0)
	{
		for(int i=n+1;i>mid;i--)
		{
			num[i]=num[i-1];
			wd[i]=wd[i-1];
		}
		num[mid+1]=bnum[mid]-siz/2;
		num[mid]-=num[mid+1];
		n++;
	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<wd[i]-1+'a'<<' '<<num[i]<<'\n';
//	}
	int l=1,r=n;
	while(l<r)
	{
		if(wd[l]==wd[r])
		{
			if(num[l]>=num[r])
			{
				num[l]-=num[r];
				r++;
			}
			else
			{
				num[r]-=num[l];
				l++;
			}
		}
		else if(num[l]>num[r])
		{
			num[l]-=num[r];
			ans+=num[r];
			r--;
		}
		else if(num[l]==num[r])
		{
			ans+=num[l];
			l++;
			r--;
		}
		else if(num[l]<num[r])
		{
			ans+=num[l];
			num[r]-=num[l];
			l++;
		}
	}
	
	cout<<ans;
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
3 
2 a
2 b
1 c


4 
10 a
10 a
10 b
10 b


3
1 a
2 b
2 c

3
51 a
25 b
25 c

4
24 c
27 a
25 b
25 c




*/
