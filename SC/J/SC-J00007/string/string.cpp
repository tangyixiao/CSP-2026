#include<bits/stdc++.h>
#define int long long
using namespace std;
char c[200005];
int A[200005];
int n,ans=0;
char k;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>A[i]>>c[i];
	int l=1,r=n;
	int temp=0;
	while(l<r)
	{
		temp=abs(A[l]-A[r]);
		if(c[l]!=c[r]) ans+=min(A[l],A[r]);
		if(A[l]>A[r])
		{
			k=c[l];
			r--;
			while(k==c[l] && l<r)
			{
				if(temp>A[r])
				{
					temp-=A[r];
					if(k!=c[r]) ans+=A[r];
				}
				else
				{
					if(k!=c[r]) ans+=temp;
					A[r]-=temp;
					k=c[r];
					break;
				}
				r--;
			}
			l++;
		}
		else if(A[l]<A[r])
		{
			k=c[r];
			l++;
			while(k==c[r] && l<r)
			{
				if(temp>A[l])
				{
					temp-=A[l];
					if(k!=c[l]) ans+=A[l];
				}
				else
				{
					if(k!=c[l]) ans+=temp;
					A[l]-=temp;
					k=c[l];
					break;
				}
				l++;
			}
			r--;
		}
		else
		{
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}