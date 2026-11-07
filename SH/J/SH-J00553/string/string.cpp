#include <iostream>
#include <cstdio>
using namespace std;
int a[200005];
int b[200005];
char s[200005];
char t[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
		b[n-i+1]=a[i];
		t[n-i+1]=s[i];
	}
	int i=1,j=1;
	long long cnt=0;
	while (i<=n&&j<=n)
	{
		if (s[i]==t[j])
		{
			if (a[i]>b[j])
			{
				a[i]-=b[j];
				j++;
			}
			else
			{
				b[j]-=a[i];
				i++;
			}
		}
		else
		{
			if (a[i]>b[j])
			{
				a[i]-=b[j];
				cnt+=b[j];
				j++;
			}
			else
			{
				b[j]-=a[i];
				cnt+=a[i];
				i++;
			}
		}
	}
	cout<<cnt/2<<endl;
	return 0;
 } 
