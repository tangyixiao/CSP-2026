#include<bits/stdc++.h>
using namespace std;
long long a[50000005],ans,sum;
string z,c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];cin>>c[i];
		ans+=a[i];
		for(int j=0;j<a[i];j++)
		{
			z+=c[i];
		}
	}
	for(int j=0;j<z.size();j++)
	{
		if(ans%2==1)
		{
			if(j==ans/2+1) break;
		}
		else
		{
			if(j==ans/2) break;
		}
		if(z[j]!=z[ans-j-1]) sum++;
		else continue;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
