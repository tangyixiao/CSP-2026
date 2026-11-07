#include<bits/stdc++.h>
using namespace std;
int n,size;
int a[200010];
char c[200010];
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int j=1,i=n;
	while(j<=n&&i>=1&&j<=i)
	{
		if(c[j]==c[i]&&a[j]==a[i])
		{
			j++;
			i--;
//			cout<<a[j]<<j<<" "<<c[j]<<" "<<a[i]<<i<<" "<<c[i]<<endl;	
		}
		else if(c[j]==c[i]&&a[j]!=a[i])
		{
//			cout<<a[j]<<j<<" "<<c[j]<<" "<<a[i]<<i<<" "<<c[i]<<endl;				
			if(a[j]<a[i])
			{
				a[i]-=a[j];
				j++;
			}
			else if(a[j]>a[i])
			{
				a[j]-=a[i];
				i--;
			}
		}
		else if(c[j]!=c[i]&&a[j]==a[i])
		{
//			cout<<a[j]<<j<<" "<<c[j]<<" "<<a[i]<<i<<" "<<c[i]<<endl;				
			ans+=a[j];
			j++;
			i--;
		}
		else if(c[j]!=c[i]&&a[j]!=a[i])
		{
//			cout<<a[j]<<j<<" "<<c[j]<<" "<<a[i]<<i<<" "<<c[i]<<endl;	
			if(a[j]<a[i])
			{
				ans+=a[j];
				a[i]-=a[j];
				j++;
			}
			else if(a[j]>a[i])
			{
				
				ans+=a[i];
				a[j]-=a[i];
				i--;
			}
		}
//		cout<<i<<" "<<j<<endl;
	}
	cout<<ans;
	return 0;
}