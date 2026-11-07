#include <bits/stdc++.h>
using namespace std;
int n,m,ans=-1e9,a[200005],mem[2000][2000];
bool f[2000][2000];
void dfs(int cnt,int j,int x){
	if(cnt>=m) ans=max(ans,x);
	for(int i=j+1;i<n;i++){
		int b=a[i];
		a[i]&=x;
		dfs(cnt+1,i,a[i]);
		a[i]=b;
	}
} 
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int p=0;p<n;p++){
		dfs(1,p,a[p]);
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
