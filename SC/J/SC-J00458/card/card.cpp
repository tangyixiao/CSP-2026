#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000000],sum[1000000];
queue<int> p;
queue<int> q；
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		int maxx=-1;
		while(!p.empty()){
			p.pop();
		}
		while(!q.empty()){
			q.pop();
		}
		for(int j=i;j<=n;j++){
			p.push(a[j]);
		}
		while(!p.empty()){
			if(p.front() == q.front()){
				q.pop();
			}
			q.push(p.front());
			p.pop();
		}
		while(!q.empty()){
			sum[q.front()]++;
			maxx=max(maxx,q.front());
			q.pop();
		}
		cout<<sum[i]<<" ";
	}
	return 0;
}