#include<bits/stdc++.h>
using namespace std;
const int N=200010;
long long a[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long cnt=0,l=0,l1=1,r;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	r=n;
	long long p=1,q=1;
	for(long long i=1;i<=l/2;i++,p++,q++)
	{
		if(p>a[l1])
		{
			l1++;
			p=1;
		}
		if(q>a[r])
		{
			r--;
			q=1;
		}
		if(c[l1]!=c[r])
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}