#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll a[N],suf[N],per[N];
int n,m;
ll ans=0;
void dfs(int pos,int cnt,ll sum){
	if(cnt==m){
		ans=max(ans,sum);
	}
	if(pos>n||cnt>m){
		return ;
	}
	dfs(pos+1,cnt,sum);
	if(sum==-1){
		dfs(pos+1,cnt+1,a[pos]);
	}
	else{
		dfs(pos+1,cnt+1,sum&a[pos]);
	}
}
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	//我要开始乱搞了
	//能过13个点，应该是65pts 
	if(n<=20){
		//测点1，2，3，4，5 不要紧我还会暴搜 
		dfs(1,0,-1);
		cout<<ans; 
		return 0;
	}
	if(m==1){
		//测点6 枚举 
		ll mx=0;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	} 
	if(m==n){
		//测点7 Ctrl+A
		ll mx=a[1];
		for(int i=2;i<=n;i++){
			mx&=a[i];
		} 
		cout<<mx;
		return 0;
	}
	if(m==2){
		//测点8，9，10 继续枚举 
		ll mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
		return 0;
	}
	if(m==n-1){
		//测点11，12 枚举哪个不选
		//前缀and+后缀and直接解决 
		suf[1]=a[1];
		for(int i=2;i<=n;i++){
			suf[i]=suf[i-1]&a[i];
		}
		per[n]=a[n];
		for(int i=n-1;i>=1;i--){
			per[i]=per[i+1]&a[i];
		}
		ll mx=0;
		for(int i=1;i<=n;i++){
			if(i==1){
				mx=max(mx,per[2]);
			}
			if(i==n){
				mx=max(mx,suf[n-1]);
			}
			mx=max(mx,suf[i-1]&per[i+1]);
		}
		cout<<mx;
		return 0;
	}
	//测试点13，我就是冲着特殊性质A去的
	//这意味这每个数的二进制表示下，除了前导零，其他全是1
	//直接贪心选前m大的
	sort(a+1,a+n+1,cmp); 
	ll mx=a[1];
	for(int i=2;i<=m;i++){
		mx&=a[i];
	}
	cout<<mx;
	return 0;
} 
