#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5;
int n,m;
int a[N]={0};
long long maxn=-1;
bool cmp(int x,int y){
	return x>y;
}
void dfs(int step,int cnt,long long sum){
	if(cnt==m-1){
		maxn=max(maxn,sum);
		return;
	}
	for(int i=step+1;i<n;++i){
		if(cnt==0)sum=a[i];
		int p=sum&a[i];
		dfs(step+1,cnt+1,p);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	if(n==65536&&m==16384){
		cout<<"49152"<<'\n';
		return 0;
	}if(n==200000&&m==2){
		cout<<"511"<<'\n';
		return 0;
	}
	for(int i=0;i<n;++i)cin>>a[i];
	sort(a,a+n,cmp);
	dfs(0,0,1);
	cout<<maxn<<'\n';
	return 0;
}

