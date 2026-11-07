#include<bits/stdc++.h>
using namespace std;
int n , m ,x , num , y , ttt;
long long sum[10005];
int main ()
{
	freopen("and.in" , "r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int  i = 1 ; i <= n ;i++)
	
	{
		cin >> sum[i];		
	}
	for(int i =1 ; i <= n;i++)
	{
		num = 0;
		num = sum[i]&sum[i+1];
		for(int  l = i+2; l <= m; l++)
		{
			num &= sum[l];
		}
		if(num > ttt)
		{
			ttt = num;
		}
	}
	cout << ttt;
	
	return 0;
}
