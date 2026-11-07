#include<bits/stdc++.h>
using namespace std;
long long a[500100],n,m,b[300300],c[300300];
stack<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int ii=1;ii<=n;ii++){
		for(int i=1;i<=m;i++){
			c[i]=0;
		}
		for(int i=ii;i<=n;i++){
			if(c[a[i]]==1){
				while(q.top()!=a[i]){
					c[q.top()]--;
					q.pop();
				}
				c[a[i]]--;
				q.pop();
			}
			q.push(a[i]);
			c[a[i]]++;
		}
		int l=q.size();
		for(int i=1;i<=l;i++){
			b[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
} 