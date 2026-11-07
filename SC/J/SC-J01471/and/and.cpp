#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int ans=0;

int cnt1(int x){
	int qwe=0;
	while(x){
		qwe+=x%2;
		x/=2;
	}
	return qwe;
}

bool nm(int x,int y){
	return cnt1(x)>=cnt1(y);
}

void dfs(int c,int k){
	if(c>m){
		ans=max(k,ans);
		return;
	}
	
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,nm);
	ans=a[1];
	for(int i=1;i<=m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
//注意注意我只是一個普通的液氮玩家冰冰冰 