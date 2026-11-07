#include<iostream>
using namespace std;
const int N=2*1e5;
long long n,m;
long long a[N];
long long answer=0;
void dfs(long long i,long long ans ,long long hc){
	if(hc==m){
		answer=max(answer,ans);
		return;
	}
	if(i==n) return;
	if(i==n-1){
		dfs(i+1,ans&a[i],hc+1);
		return ;
	}
	if(n-i<(m-hc)) return; 
	if(hc==0){
		dfs(i+1,0,hc);
		dfs(i+1,a[i],hc+1);
		return;
	}
	
	dfs(i+1,ans&a[i],hc+1);
	dfs(i+1,ans,hc);
	return ;
}
 

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,0,0);
	cout<<answer;
	
	return 0;
} 
