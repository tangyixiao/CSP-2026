#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,k,v,r,ans,u,z;
int c[N];
int a[N];
char b[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	c[0]=0;
	ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		c[i]=c[i-1]+a[i];
	}
	k=c[n]/2+c[n]%2;
	for(int i=1;i<=n;i++){
		if(c[i]>=k){
			v=i;
			break;
		}
	}
	r=n;
	u=0,z=0;
	u=a[1],z=a[r];
	for(int l=1;l<=v&&l<r;){
		if(l!=v&&r!=v){
			if(b[l]==b[r]){
				if(u>z)
				{
					u-=z;
					z=0;
					r--;
					z=a[r];
				}
				else
				if(u<z)
				{
					z-=u;
					u=0;
					l++;
					u=a[l];
				}
				else if(u==z)
				{
					z=0,u=0;
					l++,r--;
					u=a[l],z=a[r];
				}
			}
			else
			{
				if(u>z)
				{
					ans+=z;
					u-=z;
					z=0;
					r--;
					z=a[r];
				}
				else if(u<z)
				{
					ans+=u;
					z-=u;
					u=0;
					l++;
					u=a[l];
				}
				else
				{
					ans+=z;
					z=0,u=0;
					l++,r--;
					u=a[l],z=a[r];
				}
			}
		}
		else
		{
			if(l==v){
				if(b[v]!=b[r])
				ans+=z;
				r--;
				for(;r>v;r--)
				{
					if(b[v]!=b[r])ans+=a[r];
				}
				break;
			}
			if(r==v){
				if(b[v]!=b[l])
				ans+=u;
				l++;
				for(;l<v;l++)
				{
					if(b[l]!=b[v])ans+=a[l];
				}
				break;
			}
		}
	}
	cout<<ans;
}
