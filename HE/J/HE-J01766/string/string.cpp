#include <bits/stdc++.h>
using namespace std;
long long n,cd=0,sum=0;
const int N=2e5;
long long a[N];
char b[N],ys[N];
bool bo=true;
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (long long i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for (long long j=1;j<=a[i];j++)
		{
			ys[cd+j]=b[i];
		}
	    cd=a[i]+cd;
	}
	long long mi=cd/2;
	for (long long l=1,r=cd;l<=mi;l++,r--)
	{
		if (ys[l]==ys[r])
		{
			continue;
		}
		else
		{
			bo=false;
			sum++;
		}
	}
	if (bo==true)
	{
		cout << 0;
		return 0;
	}
	else
	{
		cout << sum;
	}
	fclose(stdin);
    fclose(stdout);
	return 0;
}

