#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,xz;
	long long a;
	long long le=0;
	cin>>n;
	string p;
	string s;
	for (long long i=1;i<=n;i+=1)
	{
		cin>>a>>p[0];
		for (long long j=1;j<=a;j+=1)
		{
			le+=1;
			s[le]=p[0];
		}
	}
	long long sum=0,l=1,r=le;
	if (l%2==0)
		xz=le/2;
	else
		xz=le/2+1;
	while(l!=xz)
	{
		if (s[l]!=s[r])
			sum+=1;
		l+=1,r-=1;
	}
	cout<<sum;
	return 0;
}
	
