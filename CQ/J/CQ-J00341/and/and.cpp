#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+1; 
int n,m;
long long int a[N];
bool cmp(int a,int b)
{
	return a>b;
}
int power(int n)
{
	if(n==0||n==1) return 0;
	int i=0;
	while(n>0)
	{
		n/=2;
		i++;
	}
	return i;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[m];
	return 0;
}
