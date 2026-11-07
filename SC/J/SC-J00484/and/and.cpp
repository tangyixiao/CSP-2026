#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],num;
struct node{
	int step,id,ans;
};
void bfs(){
	queue<node> q;
	node t1,t2;
	t1.step=1;t1.id=1;t1.ans=a[1];
	t2.step=0;t2.id=1;t2.ans=0;
	q.push(t1);
	q.push(t2);
	while(!q.empty()){
		node cur=q.front();q.pop();
		if(cur.step==m) num=max(num,cur.ans);
		if(cur.id==n) continue;
		if(n-cur.id+cur.step<m) continue;
		if(cur.step==0&&cur.ans==0){
			node temp;
			temp.step=cur.step;temp.id=cur.id+1;temp.ans=0;
			q.push(temp);
			temp.step=cur.step+1;temp.id=cur.id+1;temp.ans=a[cur.id+1];
			q.push(temp);
		}
		else{
			node temp;
			temp.step=cur.step;temp.id=cur.id+1;temp.ans=cur.ans;
			q.push(temp);
			temp.step=cur.step+1;temp.id=cur.id+1;temp.ans=cur.ans&a[cur.id+1];
			q.push(temp);
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20){
		bfs();
		cout<<num;
	}
	else if(n<=2000&&m==1){
		int mx=0;
		for(int i=1;i<=n;i++) mx=max(mx,a[i]);
		cout<<mx;
	}
	else if(n<=2000&&m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++) sum=sum&a[i];
		cout<<sum;
	}
	else if(n<=2000&&m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				mx=max(mx,(a[i]&a[j]));
			}
		}
		cout<<mx;
	}
	else if(m==n-1){
		int sum=a[1];
		for(int i=2;i<=n;i++) sum=sum&a[i];
		int mx=0;
		for(int i=1;i<=n;i++) mx=max(mx,(sum&a[i]));
		cout<<mx;
	}
	return 0;
}