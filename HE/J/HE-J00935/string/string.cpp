#include<bits/stdc++.h>
using namespace std;
struct node{
	long long st,en,nu;
	char x;
}a[500015];
long long n,cnt,len,ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	if(n==1)
	{
		cout <<0;
		exit(0);
	}
	for(int i=1;i<=n;i++)
	{
		long long num;
		cin >>num>>a[i].x;
		a[i].nu=num;
		len+=num;
		a[i].st=a[i-1].en+1;
		a[i].en=a[i-1].en+num;
	}
//	cout <<"len "<<len<<endl;
	long long l=1,tlen=(len>>1),wlen=(len+1)>>1;
	while(a[l].st<=tlen)
	{
//		cout <<"l "<<l<<endl;
		long long sta=max(len-a[l].st+1,wlen);
		long long ta=max(len-a[l].en+1,wlen);
//		cout <<"sta "<<sta<<"   ta "<<ta<<endl; 
		for(int j=n;a[j].en>=ta;j--)
		{
//			cout <<"j "<<j<<"   "<<a[j].st<<"   "<<a[j].en<<endl;
			if(sta>=a[j].st && ta<=a[j].en)
			{
				if(a[l].x!=a[j].x)
				{
//					cout <<"不等于,加"<<min(a[j].nu,a[j].en-ta+1)<<endl;
					ans+=min(a[j].nu,a[j].en-ta+1);
				}
			}
		}
	//	now+=a[l].nu;
		l++;
	}
	cout <<ans;
	return 0;
}
/*
3
2 a
2 b
1 c
*/
