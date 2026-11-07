#include <bits/stdc++.h>
using namespace std;
//const long long inf=2147483647;
struct node{
	int k,x,sum;
	friend bool operator <(node a,node b){
		return a.sum<b.sum;
	}
};
int n,m,a[200005],ans=0;
priority_queue<node> q;
//void dfs(int k,int x){
//	if(k==m+1){
//		ans=max(ans,sum);
//		return;
//	}
//	if(sum<=ans)return;
//	if(n-x<m-k)return;
//	if(k==1){
//		for(int i = x;i <= n;i++){
//			if(a[i]>ans){
//				sum=a[i];
//				dfs(k+1,i+1);
//			}
//		}
//		return;
//	}
//	int ss=sum;
//	for(int i = x;i <= n;i++){
//		sum=ss&&a[i];
//		dfs(k+1,i+1);
//	}
//}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		q.push({1,1,a[i]});
	}
//	sort(a+1,a+n+1,greater<int>());
	while(!q.empty()){
		node u=q.top();
		q.pop();
		if(u.sum<=ans)continue;
		if(u.k==m+1){
			ans=max(ans,u.sum);
			continue;
		}
		if(n-u.x<m-u.k)continue;
		for(int i = u.x;i <= n;i++){
			q.push({u.k+1,i+1,u.sum&a[i]});
		}
	}
	cout << ans;
	return 0;
}

