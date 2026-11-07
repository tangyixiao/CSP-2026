#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    long long a[200005];
    char c[200005];
    int n;
    cin>>n;
    long long ans=0;
    for (int i=1;i<=n;i++)
    {
    	cin>>a[i]>>c[i];
	}
	int i=1,j=n;
	while (i!=j)
	{
		long long h=min(a[i],a[j]);
		if (a[i]==a[j])
		{
			if (c[i]!=c[j])
			{
				ans+=h;
				a[i]-=h;
				a[j]-=h;
				if (a[i]==0) i++;
				if (a[j]==0) j--;
			}
			else 
			{
				a[i]=0;
				a[j]=0; 
				i++;
				j--;
			}
		}
		else 
		{
			if (c[i]!=c[j])
			{
				ans+=h;
				a[i]-=h;
				a[j]-=h;
				if (a[i]==0) i++;
				if (a[j]==0) j--;
			}
			else 
			{
				a[i]-=h;
				a[j]-=h;
				if (a[i]==0) i++;
				if (a[j]==0) j--;
			}
		}
	}
	cout<<ans;
    return 0;
}