#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int a[N];
int ans;
int n,m;
bool cmp(int x,int y){
	return x>y;
}
map<int,bool>mp;
void dfs(int now,int sum,int cnt){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	if(now==n+1) return;
	dfs(now+1,sum&a[now],cnt+1);
	dfs(now+1,sum,cnt);
}
void init(){
	mp[0]=1;
	int tmp=1;
	for(int i=1;i<=32;i++){
		mp[tmp-1]=1;
		tmp*=2;
	}
}
// dp[i][j]表示前i个数中，选取j个数按位与的结果的最大值，复杂度O(N*N)
// dp[i][j]=max(dp[i-1][j-1]&a[i],dp[i-1][j]);
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	if(m==1){
		int mx=0;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx<<endl;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=(ans&a[i]);
		}
		cout<<ans<<endl;
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					ans=max(ans,(a[i]&a[j]));
				}
			}
		}
		cout<<ans<<endl;
		return 0;
	}
	if(n<=20){
		dfs(1,2147483647,0);
		cout<<ans<<endl;
		return 0;
	}
	init();
	bool flag=1;
	for(int i=1;i<=n;i++){
		if(!mp[a[i]]){
			flag=0;
			break;
		}
	}
	if(flag){
		sort(a+1,a+n+1,cmp);
		cout<<a[m]<<endl;
		return 0;
	}
	dfs(1,2147483647,0);
	cout<<ans<<endl;
	return 0;
}
// 去年明日按位或，今年今日按位与。。。
// DP没咋学。。。打个50pts暴力走人好了
// 完蛋了大样例3错了。。。结果差了一点点。。
// 知道了，不能直接取max，大的和大的按位与不一定就大
// 那怎么样的数按位与就一定大呢？。。
// 那当然最好是数位上都是1的
// 两个数相差1最好，一定等于较小的那个
// 算了拿点部分分走人吧
// dfs:25pts到手
// m=1:5pts到手
// m=n:5pts到手
// m=2:15pts到手
// 后面的貌似不太好想了。。。