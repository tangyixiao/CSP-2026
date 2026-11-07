#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10; 
int n;
int a[N],len,end,ans;
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	if(len%2==1)
	{
		end=(len-1)/2;
	}
	else end=len/2;
	int l=1,r=n,pos=0;
	while(l<=r)
	{
		if(a[l]>a[r])
		{
			if(c[l]==c[r])
			{
				pos+=a[r];
				a[l]-=a[r];
				r--;
			}
			else
			{
				pos+=a[r];
				a[l]-=a[r];
				ans+=a[r];
				r--;
			}
		}
		else if(a[l]==a[r])
		{
			if(c[l]==c[r])
			{
				pos+=c[l];
				l++;
				r--;
			}
			else 
			{
				pos+=c[l];
				
				r--;
				ans+=a[l];l++;
			}
		}
		else
		{
			if(c[l]==c[r])
			{
				pos+=a[l];
				a[r]-=a[l];
				l++;
			}
			else
			{
				pos+=a[l];
				a[r]-=a[l];
				
				ans+=a[l];l++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
