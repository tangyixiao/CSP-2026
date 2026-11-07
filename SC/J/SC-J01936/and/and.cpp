#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[200005],book[200005],ans;//dp[j]:选j个数的最优解
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],book[i]=1;
	for(ll i=30;i>=0;i--){//枚举最高位数字是否是1
		ll sum=0;
		for(int j=1;j<=n;j++){
			if(book[j]&&(a[j]&(1<<i))){
				sum++;
			}
		}
		if(sum<m) continue;
		ans+=(1<<i);
		for(int j=1;j<=n;j++){
			if(!(a[j]&(1<<i))){
				book[j]=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
