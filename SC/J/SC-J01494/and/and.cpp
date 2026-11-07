#include<bits/stdc++.h>
using namespace std;
int _max=0;
int m,n;
int a[200005];
int num=-1;
void bfs(int step,bool vis[]){
	if(step==m){
		for(int i=1;i<=n;i++){
			if(vis[i]){
				if(num==-1){
					num=a[i];
				}else{
					num&=a[i];
				}
			}
		}
		_max=max(_max,num);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			bfs(step+1,vis);
			vis[i]=0;
		}
	}
	return ;
}
bool vis[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	bfs(0,vis);
	cout<<_max;
	return 0;
}