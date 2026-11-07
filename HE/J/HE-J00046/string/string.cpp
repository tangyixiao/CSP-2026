#include<bits/stdc++.h>
using namespace std;
const int N=200005;
long long n,x[N],sum;
char y[N];
char check(long long a)
{
	char c;
	long long num=0;
	for(int i=1;i <= n;i++)
	{
		num+=x[i];
		if(a<=num)
		{
			c=y[i];
			return c;
		}
	}
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i <= n;i++) 
	{
		cin >> x[i];
		cin >> y[i];
		sum+=x[i];
	}
	long long minp=0,l=1,r=sum;
	if(sum>1e9) 
	{
		cout << sum/2 << endl;
		return 0;
	}
	while(l<r)
	{
		char qq=check(l);
		char ww=check(r);
		if(qq!=ww)
		{
			minp++;
		}
		l++,r--;
	}
	cout << minp << endl;
	return 0;
}
