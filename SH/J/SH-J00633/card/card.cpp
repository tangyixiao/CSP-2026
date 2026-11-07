#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10;
const int M = 3e5 + 10;

int m, n;
int arr[N];
int fur[M];
int num[M];
int ans[M];
bool vis[M];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out","w", stdout);
	
	cin>>n>>m;
	for(int i = 1; i <= n ; i ++)
	{
		cin>>arr[i];
		fur[arr[i]] = i;
		num[arr[i]] ++;
	}
	
//	for(int i = 1; i <= m; i ++)
//	{
//		cout<<fur[i]<<' ';
//	}
//	cout<<endl;
//	for(int i = 1; i <= m ; i ++)
//	{
//		cout<<num[i]<<' ';
//	}
//	cout<<endl;
	
	for(int i = 1; i <= n; i ++)
	{
		if(vis[arr[i]]) continue;
		vis[arr[i]] = 1;
		int Num = num[arr[i]];
//		cout<<i<<endl;
		
		for(int j = i;;)
		{
//			cout<<j<<' ';
			ans[arr[j]] += Num;
			if(fur[arr[j]] == n) break;
			j = fur[arr[j]] + 1;
		}
//		cout<<endl;
	}
	
	for(int i = 1; i < m ; i ++)
	{
		cout<<ans[i]<<' ';
	}
	cout<<ans[m]<<endl;
//	cout<<endl;
	return 0;
}
