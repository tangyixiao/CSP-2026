#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200001],cnt=0;
int c[2001];
bool ok[2001];
void dfs(int x){
	if(x==m+1){
		int cnt1=a[c[1]];
		for(int i=1;i<=m;i++){
			cnt1=cnt1&a[c[i]];
		}
		cnt=max(cnt,cnt1*1LL);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!ok[i]){
			c[x]=i;
			ok[i]=true;
			dfs(x+1);
			ok[i]=false;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool ok1=true,ok2=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(!ok1)
			continue; 
		bool ok1k=false;
		for(int j=1;j<=21;j++){
			if(pow(2,j)==a[i]+1){
				ok1k=true;
				break;
			}
		}
		if(!ok1k)
			ok1=false;
		if(a[i]!=i-1)
			ok2=false;
	}
	if(n<=20||m==2){
		memset(ok,false,sizeof(ok));
		dfs(1);
		cout<<cnt;
		return 0;
	}
	sort(a+1,a+n+1);
	if(ok1){
		int len=n-m+1;
		cnt=a[n];
		for(int i=n;i>=len;i--){
			cnt=cnt&a[i];
		}
		cout<<cnt;
		return 0;
	}
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==n){
		cnt=a[1];
		for(int i=1;i<=n;i++){
			cnt=cnt&a[i];
		}
		cout<<cnt;
		return 0;
	}
	return 0;
}
