#include<bits/stdc++.h>
using namespace std;

int a[20000];
int n,m,maxt=-1;
void dfs(int x,int cnt,int i){
	if(i==n&&x<=m)return;
	if(x==m+1){
		maxt=max(maxt,cnt);
		return;
	}
	dfs(x+1,cnt&a[i],i+1);
	
	dfs(x,cnt,i+1);
}
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
if(n<=20){
	dfs(1,int(pow(2,25))-1,1);
}

int cnt=int(pow(2,25))-1;
 if(n<=2000&&m==n){
	for(int i=1;i<=n;i++){
		cnt&=a[i]; 
	}
	cout<<cnt;
}
else if(n<=2000&&m==1){
	int maxn=-1;
	for(int i=1;i<=n;i++){
		maxn=max(maxn,a[i]);
	}
	cout<<maxn;
}
else if(n<=2000&&m==2){
	int maxn=-1;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			maxn=max(maxn,a[i]&a[j]);
		}
	}
	cout<<maxn;
}


	return 0;
}
