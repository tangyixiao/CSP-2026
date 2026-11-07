#include<bits/stdc++.h>
using namespace std;
int n,m,a[200002],f[200002];
long long num;
void dfs(int mm,long long sum){
	if(mm==m){
		num=max(sum,num);
		return;
	}
	mm++;
	if(mm==1){
		for(int i=0;i<n;i++){
			if(f[i]==0){
				f[i]=1;
				dfs(mm,sum+a[i]);
				f[i]=0;
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(f[i]==0){
				f[i]=1;
				dfs(mm,sum&a[i]);
				f[i]=0;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,0);
	cout<<num;
	return 0;
} 
