#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5;
int n,m,a[N],pre[M];
int b[N];
int main()
{
	cin>>n>>m;
	for(int i=1,i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(pre[a[i]])
		{
			b[pre[a[i]]]++;
			b[i]--;
		}
	}
}