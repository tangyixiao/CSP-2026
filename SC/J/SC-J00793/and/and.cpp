#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[200005];
int mx=-1e9;
struct node{
	int x,y,pre;
};
bool operator < (node g,node h){
	return g.x<h.x;
}
priority_queue<node> q;
void bfs(){
	q.push({-1,0,0});
	while(!q.empty()){
		node f=q.top();
		q.pop();
		if((f.x<=mx && f.x!=-1) || f.y>m)	continue;
		if(f.y==m){
			if(f.x>mx){
				mx=f.x;
			}
			continue;
		}
		for(int i=f.pre+1;i<=n;i++){
			if(f.x==-1){
				q.push({a[i],f.y+1,i});
			}
			else{
				q.push({a[i]&f.x,f.y+1,i});
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(i<=m){
			if(i==1){
				mx=a[i];
			}
			else{
				mx=mx&a[i];
			}
		}
	}
	bfs();
	cout<<mx;
	return 0;
} 