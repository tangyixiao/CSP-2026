#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005],maxn=INT_MIN;
bool v[1005]={0};
void dfs(int sum,int layer){
	if(layer == m){
		if(sum>maxn) maxn=sum;
		return;
	}
	for(int i=0;i<n;i++){
		if(v[i] == 0){
			v[i] =1;
			if(layer == 0){
		        dfs(a[i],layer+1);
			}else{
				dfs((sum&a[i]),layer+1);
			}
			v[i] = 0;
		}
	}
}
int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	dfs(0,0);
	cout<<maxn;
}