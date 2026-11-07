#include<bits/stdc++.h>
using namespace std;
long long a[200010];char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		//scanf("%lld%c",&a[i],c[i]);
	}
	int l=1,r=n;
	while(l<=r)
	{
		
		if(c[l]==c[r])
		{
			if(a[l]>a[r])
			{
				a[l]-=a[r],r--;
			}
			else if(a[l]<a[r])
			{
				a[r]-=a[l];l++;
			}
			else if(a[l]==a[r])
			{
				l++,r--; 
			}
		}
		else 
		{
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}
			else if(a[l]<a[r])
			{
				a[r]-=a[l];
				ans+=a[l];
				l++;
			}
			else if(a[l]==a[r])
			{
				ans+=a[l];
				l++,r--; 
			}
		}
		//cout<<l<<" "<<r<<" "<<ans<<" "<<a[l]<<" "<<a[r]<<endl;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
