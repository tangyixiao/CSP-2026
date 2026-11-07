#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FILE "and"
#define JUDGE
int n,m;
const int N=2e5+5;
int a[N];
int cnt=0;
int t[4];
void dfs(int lst,int k,int ad){
	if(ad<=cnt) return ;
	if(k>m) cnt=max(cnt,ad);
	for(int i=lst+1; i<=n; i++){
		dfs(i,k+1,ad&a[i]);
	}
}
signed main(){
	#ifdef JUDGE
	freopen(FILE ".in","r",stdin);
	freopen(FILE ".out","w",stdout);
	#endif
	cin>>n>>m;
	int mx=0,sum=INT_MAX;
	bool fl=1,fl3=1;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		mx=max(mx,a[i]);
		sum&=a[i];
		fl&=!((a[i]+1)&a[i]);
		fl3&=(a[i]<4);
	}
	if(m==1){
		cout<<mx;
	}else if(m==n){
		cout<<sum;
	}else if(m==2){
		int ans=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<i; j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}else if(n<=20){
		dfs(0,1,INT_MAX);
		cout<<cnt;
	}else if(m==n-1){
		sort(a+1,a+n+1,[](int a,int b){return (bitset<32>(a).count()<bitset<32>(b).count())
			|| (bitset<32>(a).count()==bitset<32>(b).count() && a>b); });
		int ans=INT_MAX;
		for(int i=1; i<=n; i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(fl){
		sort(a+1,a+n+1,greater<int>());
		int ans=INT_MAX;
		for(int i=1; i<=m; i++){
			ans&=a[i];
		}
		cout<<ans;
	}else if(fl3){
		for(int i=1; i<=n; i++){
			t[a[i]]++;
		}
		if(t[3]+max(t[1],t[2])<m) cout<<0;
		else if(t[3]+t[2]>=m) cout<<2;
		else if(t[3]+t[1]>=m) cout<<1;
		else cout<<0;
	}else{
		dfs(0,1,0);
		cout<<cnt;
	}
	#ifdef JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif
	return 0;
}