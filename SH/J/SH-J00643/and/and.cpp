#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
int m;
int ans = 0;
void dfs(int step,int pos,int sum)
{
	if(step > n)
	{
		return;
	}
	if(pos > m)
	{
		//cout << pos << " " << sum << endl;
		ans = max(ans,sum);
		return;
	}
	dfs(step + 1,pos,sum);
	dfs(step + 1,pos + 1,(sum & a[step]));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
	}
	dfs(1,1,a[1]);
	//cout << (37 & 3 & 1) << endl;
	cout << ans;
	return 0;
}
