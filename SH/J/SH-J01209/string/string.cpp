#include<bits/stdc++.h> 
using namespace std;
const int N=2e5+7;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	long long sum=0;
	long long a[N]={};
	char z[N]={};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>z[i];
	}
	long long l=1,r=n+1,lenl=a[1],lenr=0;
	long long t=0;
	while(l<r)
	{
		if(lenl<=lenr)
		{
			l++;
			lenl+=a[l];
		}
		else
		{
			r--;
			lenr+=a[r];
		}
		if(z[l]!=z[r])
		{
			sum+=min(lenl,lenr)-t;
		}
		t=min(lenl,lenr);
	}
	cout<<sum;
	return 0;
}
