#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int m,n;
long long a[N],ans;
void dfs(long long num,long long sum,long long cnt){
//	cout<<num<<" "<<sum<<" "<<cnt<<'\n';
	if(cnt>m){
		ans=max(ans,sum);
		return;
	}
	if(num>n)return;
	dfs(num+1,sum,cnt);
	dfs(num+1,sum&=a[num],cnt+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(i,a[i],1);
	}
	cout<<ans;
	return 0;
} 
