#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],ans;
int dfs(int me,int k,int ma)
{
	int an;
	for(int i=k;i<=n;i++) 
	{
		for(int j=i+1;j<=n;j++) 
		{
			int aa=a[i]&a[j];
			ans=max(ans,a[i]&a[j]);
			cout<<a[i]<<' '<<a[j]<<' '<<aa<<'\n';
		}	
	}
	if(ma==1)
	{
		cout<<an<<'\n';
		return an;
	}
	return an;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
		cin>>a[i];
	dfs(a[1],1,m);
//	for(int i=1;i<=n;i++) 
//	{
//		for(int j=i+1;j<=n;j++) 
//		{
//			int aa=a[i]&a[j];
//			ans=max(ans,a[i]&a[j]);
//			cout<<a[i]<<' '<<a[j]<<' '<<aa<<'\n';
//		}	
//	}
	cout<<'\n'<<ans;
	return 0;
}
/*

123
124
125
134
135
145
234
235
245
345
4 2 
3 15 12 12
*/
