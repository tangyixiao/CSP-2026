#include<iostream>
#define ll long long
using namespace std;
ll a[200005],ans=0;
int n;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r)
	{
		ll cha=min(a[l],a[r]);
		if(c[l]!=c[r])ans+=cha;
		a[l]-=cha;
		a[r]-=cha;
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
