#include<bits/stdc++.h>
using namespace std;
long long a[400010];
char b[400010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	long long sum=0;
	while(l<r)
	{
		if(a[l]>a[r])
		{
			if(b[l]!=b[r])
			{
				sum+=a[r];
				a[l]-=a[r];
			}
			else
			{
				a[l]-=a[r];
			}
			r--;
		}
		else
		{
			if(b[l]!=b[r])
			{
				sum+=a[l];
				a[r]-=a[l];
			}
			else
			{
				a[r]-=a[l];
			}
			l++;
		}
	}
	cout<<sum;
    return 0;
}



