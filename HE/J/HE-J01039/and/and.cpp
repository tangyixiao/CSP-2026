#include<bits/stdc++.h>
using namespace std;
int n,m;
bool vis[200005];
long long maxx=0;
vector<long long> a;
void dfs(long long num,int g,int id){
	if(g==m){
		maxx=max(maxx,num);
		return;
	}
	for(int i=id+1;i<n;i++){
		if(vis[i]==0){
			if(a[i]==0){
				return;
			}
			vis[i]=1;
			if(g==0){
				dfs(a[i],g+1,i);
			}
			else{
				dfs(num&a[i],g+1,i);
			}
			vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long maxxx=0;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		maxxx=max(maxxx,x);
		a.push_back(x);
	}
	if(m==n){
		long long sum=a[0];
		for(int i=1;i<n;i++){
			sum=sum&a[i];
		}
		cout<<sum;
		return 0;
	}
	if(m==1){
		cout<<maxxx;
		return 0;
	}
	dfs(0,0,-1);
	cout<<maxx;
	return 0;
}
