#include<bits/stdc++.h>
using namespace std;
int n,m,ans6,ans7,x[200010];
bool f13=1;
int dfs(int now,int x,int sum){
	if(x==m)return sum;
	if(now>n)return 0;
	return max(dfs(now+1,x,sum),dfs(now+1,x+1,sum));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&x[i]);
		ans6=max(ans6,x[i]);
		ans7=(i-1?ans7&x[i]:x[i]);
		int y=x[i];
		for(int t=0;y;y>>=1)f13&=y&1;
	}
	if(m==1){
		cout<<ans6;
		return 0;
	}
	if(m==n){
		cout<<ans7;
		return 0;
	}
	if(m==2){
		int ans8_10=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans8_10=max(ans8_10,x[i]&x[j]);
			}
		}
		cout<<ans8_10;
		return 0;
	}
	if(m==n-1){
		int ans11_12=0;
		for(int i=1;i<=n;i++){
			int t=(i-1?x[1]:x[2]);
			for(int j=3;j<=n;j++){
				if(i==j)continue;
				t&=x[i];
			}
			ans11_12=max(ans11_12,t);
		}
		cout<<ans11_12;
		return 0;
	}
	if(f13){
		sort(x+1,x+n+1);
		cout<<x[m];
		return 0;
	}
	cout<<dfs(1,0,INT_MAX);
	return 0;
}