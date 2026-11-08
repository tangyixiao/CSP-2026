#include<bits/stdc++.h>
using namespace std;
const int N=200005;
using ll=long long;
int n,m; 
struct S{
	ll v;
	int dp[35];
	int l;
}a[N];
vector<int> dp[35];
int main(){
	freopen("and.in.txt","r",stdin);
	freopen("and.txt","w",stdout);
	cin>>n>>m;
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].v;
		int b=a[i].v,x=0;
		while(b){
			x++;
			a[i].dp[x]=b%2;
			b/=2;
		}
		a[i].l=x;
		dp[x].push_back(a[i].v);
		mx=max(mx,x);
	}
	int x=n;
	ll ans=0;
	for(int i=mx;i>0;i--){
		//sort(a+1,a+x+1,cmp(i));
		if(dp[i].size()>=m) {
			ans=dp[i][0];
			for(int j=0;j<m;j++){
				ans&=dp[i][j];
			}
			break;
		}
	}
	cout<<ans;
	return 0;
} 
