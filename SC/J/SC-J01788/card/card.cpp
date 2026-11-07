#include <bits/stdc++.h>
using namespace std;
queue<int>q,p;
int a[500005],b[300005]={0},c[300005]={0};
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		memset(c,0,sizeof(c));
		for(int i=t;i<=n;i++){
			c[a[i]]++;
			if(c[a[i]]>=2){
				while(q.front()!=a[i]){
					p.push(q.front());
					q.pop();
				}
				while(!q.empty()){
					c[q.front()]--;
					q.pop();
				}
				while(!p.empty()){
					q.push(p.front());
					p.pop();
				}
			}
			q.push(a[i]);
		}
		while(!q.empty()){
			b[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}