#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int a[200005];
int n,m;
queue<int>q;
int check(int x)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if((a[i]&x)==x)
		{

			sum++;
		}
	}
	return sum>=m;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int x=0,i=30;
    while(i>=0)
	{
		x|=1<<i;
		if(!check(x))
		{
			x^=1<<i;
		}
		i--;
	}
	cout<<x;
	return 0;
}