#include<iostream>
#include<cstdio>
using namespace std;
int n,num[200010],l=1,r,m;
long long gb;
char z[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++)cin>>num[i]>>z[i];
	do
	{
		m=min(num[l],num[r]);
		if(z[l]!=z[r])gb+=m;
		num[l]-=m;
		num[r]-=m;
		if(num[l]==0)l++;
		if(num[r]==0)r--;
	}
	while(r>l);
	cout<<gb;
}
