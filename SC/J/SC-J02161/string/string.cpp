#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt,a[200005];
string b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i-1];
	}
	int j=1,k=1;
    while(j<n-k+1)
    {
			long long minn=min(a[j],a[n-k+1]);
			if(b[j-1]!=b[n-k])
			{
				cnt=cnt+minn;	
			}
			if(a[j]>=a[n-k+1])
			{
				a[j]-=minn;
				k++;
				
			}
			else if(a[n-k+1]>a[j])
			{
				a[n-k+1]-=minn;
				j++;
				
			}
			else
			{
				k++;
				j++;
			}
			if(a[j]==0)
			{
				j++;
			}
			if(a[n-k+1]==0)
			{
				k++;
			}
    }
    cout<<cnt;
}