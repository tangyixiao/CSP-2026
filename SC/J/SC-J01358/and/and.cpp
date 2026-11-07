#include<bits/stdc++.h> 
using namespace std;
long long a[200005];
long long maxx=0;
int n,m;
void dfs(int nownum,long long nowmax,int nowplace){//天下无双！！！把分给我！！！ 
	if(nownum==m){
		maxx=max(nowmax,maxx);
		return;
	}
	if(nowplace>n) return;
	dfs(nownum,nowmax,nowplace+1);//buxuan
	dfs(nownum+1,nowmax&a[nowplace],nowplace+1);//xuan
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int d=n-m+1;
	for(int i=1;i<=d;i++){
		dfs(1,a[i],i+1);
	}
	cout<<maxx;
	return 0;
}