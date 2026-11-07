#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	long long n; 
	cin>>n;
	long long l=1,r=n,ans=1;
	while(l<=r)
	{
		int mid=l+(r-1)/2;
		if(check(mid))
		{
			ans=mid;
			r=mid-1;
		}
		else
			l=mid+1;
	}
	cout<<mid;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

