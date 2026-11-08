#include<bits/stdc++.h>
const int N=5e5+10;
using namespace std;
int n, m;
int a[N];
map<int, int>m1;
int f[N], f2[N];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i], m1[a[i]]+=i;
	for(int i=1; i<=n; i++)
	{
		for(int j=i+1; j<=n; j++)
		{
			if(a[i]==a[j])
			{
				f[i]=j;
				f2[j]=i;
				break;
			}
//			if(a[i]==a[j])
//			{
//				for(int k=i; k<j; k++) m1[a[k]]--;
//				break;
//			}
		}
	} 
	for(int i=1; i<=n; i++)
	{
		if(f[i]!=0)
		{
			int s=i-1;
			for(int j=i; j<f[i]; j++) if(f2[j]!=0 and f2[j]<i) s=f2[j];
			for(int k=i; k<f[i]; k++) m1[a[k]]-=(i-s);
		}
	}
	for(int i=1; i<=m; i++) cout<<m1[i]<<" ";
	
	return 0;
}

/*
10 3
3 1 2 1 3 2 3 1 2 1
*/

