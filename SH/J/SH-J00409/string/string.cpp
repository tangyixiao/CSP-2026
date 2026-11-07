#include<bits/stdc++.h>
using namespace std;
struct node
{
	char x;
	int len;
}arr[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i].len>>arr[i].x;
	}
	int j=n;
	long long cnt=0;
	for(int i=1;i<=n && i<j;i++)
	{
		node a=arr[i],b=arr[j];
		while(a.len>0)
		{
			if(j<=i) break;
			if(a.len>=b.len)
			{
				if(a.x!=b.x)
				{
					cnt+=b.len;
				}
				a.len-=b.len;
				j--;
			}
			else
			{
				if(a.x!=b.x)
				{
					cnt+=a.len;
				}
				b.len-=a.len;
				arr[j]=b;
				break;
			}
			b=arr[j];
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
