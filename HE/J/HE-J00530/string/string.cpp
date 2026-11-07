#include<bits/stdc++.h>
using namespace std;
long long  ans,cnt,sum;
int n;
int a[2000000005];
char b[2000000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		ans+=a[i];
	}
	sum=ans/2;
	for(int i=1;i<=n;i++)
	{
		if(sum%2!=0){
			if(a[i]!=a[3*sum-i])
		{
			cnt++;
		
		}
		}
		if(sum%2==0){
			if(a[i]!=a[2*sum+1-i])
			{
				cnt++;
				
			}
	
		}
		
	cout<<cnt;
	
	return 0;
	
}
}

