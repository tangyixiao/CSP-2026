#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],maxn,dfsc[N],flag[N];
bool b[N][30],c[30];

void dfs(int x){
	if(x==m){
		for(int i=1;i<=20;i++)
			c[i]=1;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=20;j++)
				c[j]=b[dfsc[i]][j]&&c[j];
		}
		int cnt=0;
		for(int i=1;i<=20;i++){
			int tem=1;
			for(int j=1;j<=i-1;j++)
			tem*=2;
			cnt+=tem*c[i];
		}
		maxn=max(maxn,cnt);
		return;
	}	
	for(int i=1;i<=n;i++){
		if(flag[i]==0){
			flag[i]=1;
			dfsc[x+1]=i;
			dfs(x+1);
			flag[i]=0;
		}
	}
} 




int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int t=a[i];
		int j=1;
		while(t!=0){
			b[i][j]=t%2;
			t/=2;
			j++;
		}
	}
	if(n<=20){
		dfs(0);
		cout<<maxn;
		return 0;
	}
	if(n==m){
		for(int i=1;i<=20;i++)
			c[i]=1;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=20;j++)
				c[j]=b[i][j]&&c[j];
		}
		int cnt=0;
		for(int i=1;i<=20;i++){
			int tem=1;
			for(int j=1;j<=i-1;j++)
			tem*=2;
			cnt+=tem*c[i];
		}
		cout<<cnt;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++)
		maxn=max(maxn,a[i]);
		cout<<maxn;
		return 0; 
	}
	if(m==2){
		dfs(0);
		cout<<maxn;
		return 0;
	}
	return 0;
} 
