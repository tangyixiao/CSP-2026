#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],dp[N],ans;
void dfs(int c,int now,int mx){
	if(now==m){
		ans=max(ans,mx);
		return; 
	}
	if(c>n)return;
	if(mx==-1){
		dfs(c+1,1,a[c]);
		dfs(c+1,0,-1);
	}else{
		int k=mx&a[c];
		dfs(c+1,now+1,k);
		dfs(c+1,now,mx);
	}
}
int cmp(int x,int y){
	if(x>y)return 1;
	return 0;
}
bool task1(){//1~5
	if(n>20)return false;
	dfs(1,0,-1);
	cout<<ans;
	return true;
}
bool task2(){//6~10
	if(n>2000)return false;
	int ans=a[1];
	if(m==1){
		for(int i=2;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
	}else if(m==2){
		ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}else if(m==n){
		for(int i=2;i<=n;i++)ans=ans&a[i];
		cout<<ans;
	}else return false;
	return true;
}
bool task3(){//13,16~17
	bool flag=true;
	int k;
	for(int i=1;i<=n;i++){
		k=a[i]&(a[i]+1);
		if(k!=0)flag=false;
	}
	if(flag){
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
		return true;
	}
	flag=true;
	for(int i=1;i<=n;i++)if(a[i]>=4)flag=false;
	if(flag){
		sort(a+1,a+n+1,cmp);
		int ans;
		if(a[m]==1)ans=0;
		else if(a[m]==2)ans=2;
		else ans=3;
		cout<<ans;
		return true;
	}
	return false;
}
bool task4(){//14~15
	for(int i=1;i<=n;i++)if(a[i]!=i-1)return false;
	reverse(a+1,a+n+1);
	int ans=a[1];
	for(int i=2;i<=m;i++)ans=ans&a[i];
	cout<<ans;
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(task1())return 0;
	if(task2())return 0;
	if(task3())return 0;
	if(task4())return 0;
	sort(a+1,a+n+1,cmp);
	int ans=a[1];
	for(int i=2;i<=m;i++)ans=ans&a[i];
	cout<<ans;
	return 0;
}
/*
85
*/
