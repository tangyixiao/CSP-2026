#include<bits/stdc++.h>//暴力(dfs)按位与只会越与越小，但不知道怎么利用这一点 ，这个效率应该比二进制枚举高一点 
using namespace std;
int n,m;
int a[200005];
int dfs(int mi,int an,int id,int bs){
	if(bs==m+1)return an;
	int ans=mi;
	for(int i=id;i+m-bs<=n;i++){
		if(an&a[i] <ans)continue;
		if(i!=id&&a[i]==a[i-1])continue;
		ans=max(ans,dfs(ans, (int)an&a[i],i+1,bs+1));
	} 
	return ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	cout<<dfs(0,(1<<31)-1,1,1);
	return 0;
}
