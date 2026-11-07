#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans=0,ans1=0,ans2=0,n1;
char c[200005];
int main()
{

freopen("string.in","r",stdin);
freopen("string.out","w",stdout); 
cin>>n;
n1=n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	cin>>c[i];
}
for(int i=1;i<=n;i++)
{
	ans+=a[i];
}
int k;//中间值 
for(k=1;k<=n;k++)
{
	ans1+=a[k];
	if(ans1>=ans/2)
	break;
}

for(int i=1;i<=k;)
{
	long long lei=min(a[i],a[n1]);
	if(c[i]!=c[n1])
	ans2+=lei;
			if(a[i]-a[n1]>0)
		{
			a[i]-=a[n1];
			n1--;
		} 
			else if(a[i]-a[n1]<0)
		{
			a[n1]-=a[i];
			i++;
		} 
		else
		{
			n1--;
			i++;
		}
		if(n1==i)
		break;
	
	
}
cout<<ans2;
	return 0;
}