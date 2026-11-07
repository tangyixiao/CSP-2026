#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N],s[N];
int n,m;
bool cmp(int a,int b)
{
	return a>b;
}
bool j(int x)
{
	long long maxn=-1;
	for(int i=1;i<=n-m+1;i++)
	{
		maxn=max(maxn,s[i+m-1]&s[i-1]);
	}
	return maxn>=x;
}
long long ef()
{
	long long l=1,r=1e9;
	while(l+1<r)
	{
		long long mid=l+r>>1;
		if(j(mid)) l=mid;
		else r=mid;
	}
	return l;
}
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	s[0]=a[1];
	for(int i=1;i<=n;i++) 
	{
		s[i]=s[i-1]&a[i];
	}
//	for(int i=0;i<=n;i++) 
//	{
//		cout<<a[i]<<" "<<s[i]<<" ";
//	}
    //cout<<endl;
	cout<<ef();
	return 0;
}