#include <bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	
	vector<int> s(n+1);
	vector<pair<int,int>> dp(n+1,{0,0});  //Öµ  ¸öÊý 
	
	for(int a=1;a<=n;a++){
		cin>>s[a];
	}
	
	if(n==1)
	{
		cout<<s[n];
		return 0;
	}
	
	if(m == n)
	{
		int res = 0;
		for(int a=1;a<=n;a++){
			s[a] = (s[a-1]&s[a]);
		}
		cout<<s[n];
		return 0;
	}
	
	if(m == 2 && m<n)
	{
		int res = 0;
		for(int a=1;a<=n;a++)
		{
			for(int b=a+1;b<=n)
			{
				res = max(res,(s[a]&s[b]));
			}
		}
		
		cout<<res;
		return 0;
	}
	
	if(m == 3)
	{
		int res = -1;
		for(int a=1;a<=n;a++)
		{
			for(int b=a+1;b<=n;b++)
			{
				for(int c=b+1;c<=n;c++)
				{
					res = max(res,s[a]&s[b]&s[c]);
				}
			}
		}
	}
	
	if(m == 4)
	{
		int res = -1;
		for(int a=1;a<=n;a++)
		{
			for(int b=a+1;b<=n;b++)
			{
				for(int c=b+1;c<=n;c++)
				{
					for(int d=c+1;d<=n;d++0)
					{
						res = max(res,s[a]&s[b]&s[c]&s[d]);
					}
				}
			}
		}
		
		cout<<res;
		return 0;
	}
	
//	for(int a=1;a<=n;a++)
//	{
//		for(int b=1;b<a;b++)
//		{
//			int cnt = dp[b].second;
//			for(int c=b;c<=a;c++)
//			{
//				if(cnt == m) break;
//				
//				//dp[a].first = max(dp[b].first,dp[b].first+b);
//				if(dp[b].first >= (dp[b].first&b))
//				{
//					dp[a].first = dp[b].first;
//					dp[a].second = dp[b].second;
//				}
//				else
//				{
//					dp[a].first = (dp[b].first&b);
//					dp[a].second = dp[b].second+1;
//				}
//			}
//		}
//	}
//	int res = -1;
//	for(int a=1;a<=n;a++)
//	{
//		
//			res = max(res,dp[a].first);
//		
//	}
//	
//	cout<<res;
	return 0;
}
/*
5 3
31 3 1 15 7
*/

