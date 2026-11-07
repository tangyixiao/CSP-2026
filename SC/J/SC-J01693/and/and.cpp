#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define lb(a) ((a)&-(a))
int a[200010];
int b[200010];
int c[200010];
int n,m;
int ans;
void dfs(int num,int cnt,int id){
	if(cnt>m) return ;
	if(id>=n){
		if(cnt!=m) return ;
		ans=max(ans,num);
		return ;
	}
	for(int i = id+1;i<=n;i++){
		dfs(num&a[i],cnt+1,i);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int mx=0;
	bool ta=1,tb=1;
	int n1=0,n2=0,n3=0;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		mx=max(a[i],mx);
		if((a[i]+1)!=lb(a[i]+1)) ta=0;
		if(a[i]!=i-1) tb=0;
		if(a[i]==1) n1++;
		if(a[i]==2) n2++;
		if(a[i]==3) n3++;
	}
	if(n<=20){
		dfs(-1,0,0);
		cout << ans;
	} else if(m==1){
		cout << mx;
	} else if(m==2){
		for(int i = 1;i<=n;i++){
			for(int j = i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
	} else if(m==n){
		ans=a[1];
		for(int i = 2;i<=n;i++){
			ans&=a[i];
		}
		cout << ans;
	} else if(m==n-1){
		b[0]=c[n+1]=-1;
		for(int i = 1;i<=n;i++){
			b[i]=b[i-1]&a[i];
		}
		for(int i = n;i>=1;i--){
			c[i]=c[i+1]&a[i];
		}
		for(int i = 1;i<=n;i++){
			ans=min(ans,b[i-1]&c[i+1]);
		}
		cout << ans;
	} else if(ta){
		sort(a+1,a+n+1);
		cout << a[n-m+1];
	} else if(tb){
		cout << n-m;
	} else if(mx<4){
		if(n2+n3>=m) cout << 2;
		else if(n1+n3>=m) cout << 1;
		else cout << 0;
	} else{
		cout << 0;
	}
	return 0;
}