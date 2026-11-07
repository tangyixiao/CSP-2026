#include<bits/stdc++.h> 
using namespace std;
long long n=0,z,cnt=0,ans=0,a[200005]={0};
string m[200005]={},c1[20000005]={},c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		cin>>z>>c;
		a[i]=z;
		m[i]=c;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2)
	{
		if(m[1]==m[2])
		{
			cout<<0;
		}
		else
		{
			cout<<1;
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=a[i];j++)
		{
			c1[ans+j]=m[i];
		}
		ans+=a[i];
	}
	ans+=a[n];
	for(int i=1;i<=ans/2;i++)
	{
		if(c1[i]!=c1[ans-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}