#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,maxx;
int a[N];
int check(int,int);
int main()
{
	/*freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);*/
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n-m+1;i++)
	{
		maxx=max(maxx,a[i]&check(i+1,m-1));
	}
	cout<<maxx;
}
int check(int x,int num)
{
	if(num==0) return 1;
	int sum=1;
	for(int i=x;i<=n-num+1;i++)
	{
		sum=max(sum,a[i]&check(i+1,m-1));
	}
	return sum;
}
