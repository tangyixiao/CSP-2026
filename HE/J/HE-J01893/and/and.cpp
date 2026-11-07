#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200003],max1=0;
void dfs(int x,int y,int z){
	if(y==m){
		if(z>max1){
			max1=z;
		}
		return;
	}
	if(x+1>n){
		return;
	}
	if(y==0){
		dfs(x+1,y+1,a[x]&a[x]);
	}else{
		dfs(x+1,y+1,z&a[x+1]);
	}
	dfs(x+1,y,z);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	dfs(1,1,a[1]);
	dfs(0,0,0);
	cout<<max1;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
