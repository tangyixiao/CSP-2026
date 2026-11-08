#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],sum = 0;
char s[200010];
int main(){
	freopen("sring.in","r",stdin); 
	freopen("sring.out","w",stdout); 
	cin >>n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> s[i];
	}
	int x = 1,y = n;
	if(n % 2 == 0)
	{
		for(int i = 1;i <= n/2;i++)
		{
			if(s[x] != s[y])
			{
				sum += max(a[x],a[y]);
			}
			x++;
			y--;
		}
	}
	else
	{
		long long v = 0;
		if(a[n/2] >= a[n/2]+1)
			v = n/2;
		else
		{
			v = n/2+1;
		}
		long long sum1 = 0,sum2 = 0;
		for(int i = 1;i < v;i++)
		{
			sum1 += a[i];
		}
		for(int i = v+1;i <= n;i++)
		{
			sum2 += a[i];
		}
		sum += max(sum1,sum2);
		
	}
	cout << sum;
	return 0;
}

