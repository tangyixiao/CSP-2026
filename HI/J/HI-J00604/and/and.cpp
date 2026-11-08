#include<bits/stdc++.h>
using namespace std;

int n,m,a[200005],ans=0,cnt=0;

int kkk(int k){
	int s=0;
	while(k>0){
		k-=k&-k;
		s++;
	}
	return s;
}

void dfs(int d,int p,int su,int s){
	cnt++;
	if(cnt>1000000){
		cout<<ans;
		exit(0);
	}
	if(d==m){
		ans=max(ans,su);
		return;
	}
	if(m-d>n-s)return;
	if(kkk(su)<kkk(ans))return;
	for(int i=p+1;i<n;i++){
		if(kkk(a[i])<kkk(ans))continue;
		dfs(d+1,i,su&a[i],i);
	}
}


int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	dfs(0,-1,(1<<31)-1,0);
	cout<<ans;
	
	
	
}
