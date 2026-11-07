#include<bits/stdc++.h>
using namespace std;
#define int long long
int t[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
int oput,n,m;
vector<int> a;
bool cmp(int a,int b){
	int pa=5201314520,pb=5201314520;
	for(int i=0;i<sizeof t;i++){
		pa=min(pa,abs(a-t[i]));
		pb=min(pb,abs(b-t[i]));
		if(t[i]>max(b,a))	break;
	}
	return pa<pb;
}

void dfs(int lev,int res,int s){
	if(lev==m){
		oput=max(oput,res);
		return ;
	}
	for(int i=s;i<n;i++){
		dfs(lev+1,(res&a[i]),i+1);
	}
}

void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	if(m==n){
		int ans=a[0];
		for(int i=1;i<n;i++)	ans=ans&a[i];
		cout<<ans;
		return ;
	}else if(m==2){
		int ans=0;
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return ;
	}else if(n<2000){
		for(int i=0;i<n-m;i++)
			dfs(1,a[i],i+1);
		cout<<oput;
		return ;
	} 
	sort(a.begin(),a.end(),cmp);
	for(int i:a)	cout<<i<<" ";
	int p=a[n-1];
	for(int i=1;i<m;i++){
		p=p&a[n-i-1];
	}
	cout<<p;
	return ;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	solve();

	return 0;
}
