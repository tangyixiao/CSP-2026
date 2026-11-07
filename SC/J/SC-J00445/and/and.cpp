#include<bits/stdc++.h>
using namespace std;
int a[200005];
int hm1(int x)
{
	int s1=0;
	while(x)
	{
		s1+=x%2;
		x/=2;
	}
	return s1;
}
bool cmp(int a,int b)
{
	int a1=hm1(a),b1=hm1(b);
	if(a1==b1) return a>=b;
	return a1>b1;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans;
	cin >>n >>m;
	for(int i=1;i<=n;i++) cin >>a[i];
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for(int i=1;i<=m;i++)
	{
		ans=ans&a[i];
	}
	cout <<ans;
}