#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pii pair<int,int>
#define fir first
#define sec second
#define mk make_pair
#define pb push_back
/*
我是秦始皇，vivo50，即可获得 and 的满分代码 
*/
 
int n,m;
int a[200009];
int S[200009];
int p[200009];
unordered_map<int,int> mp;
int ans;
int mx;
int s=0;
void dfs(int step,int x,int s){
	if (x==0){
		ans=max(ans,s);
		return ;
	}
	if (step>n) return ;
	dfs(step+1,x,s);
	if (x==m){
		dfs(step+1,x-1,a[step]);
	}
	else{
		dfs(step+1,x-1,(s&a[step]));
	}
}
bool cmp(pii x,pii y){
	return x.fir>y.fir;
}
signed main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool f=true;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]!=i-1) f=false;
		mp[a[i]]++;
		if (S[i]==0)S[i]=a[i];
		S[i]=S[i-1]&a[i];
		if (s==0) s=a[i];
		mx=max(mx,a[i]);
	}
	
	p[n]=a[n];
	 for (int i=n-1;i>=1;i--){
		p[i]=p[i+1]&a[i];
	} 
	if (f){
		cout<<p[n-m+1];
		return 0;
	}
	if (mx<1024){
		int cnt=0;
		for (int i=mx;i>=0;i--){
			cnt=cnt+mp[i];
			if (cnt>=m){
				cout<<i;
				return 0;
			}
		}
		return 0;
	}
	if (m==1){
		cout<<mx;
		return 0;
	}
	if (m==n){
		cout<<s;
		return 0; 
	}
	if (m==2){
		for (int i=1;i<=n;i++){
			for (int j=1;j<i;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int mx=max(S[n-1],p[2]);
		for (int i=2;i<n;i++){
			mx=max(mx,(S[i-1]&p[i+1]));
		}
		cout<<mx;
		return 0;	
	} 
	if (n<20){
		dfs(1,m,0);
		cout<<ans;
		return 0;
	}
	int cnt=0;
	vector<pii> vec;
	for (auto i : mp){
		vec.pb(i);
	}
	sort(vec.begin(),vec.end(),cmp);
	
	for (auto i : vec){
		cnt=cnt+i.sec;
		if (cnt>=m){
			cout<<i.sec;
			return 0;
		}
	}
	
	return 0;
}

