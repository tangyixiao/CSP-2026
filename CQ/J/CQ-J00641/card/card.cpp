#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],t[500001],b=0;
stack<int> p;
void check(int k){
	stack<int> l,q;
	while(!p.empty()){
		l.push(p.top());
		q.push(p.top());
		p.pop();
	}
	while(!l.empty()){
		if(l.top()==k) b=1;
		l.pop();
	}
	while(!q.empty()){
		p.push(q.top());
		q.pop();
	}
	return ;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b=0;
			check(a[j]);
			if(b==1){
				while(!p.empty()){
					if(p.top()==a[j]){
						p.pop();
						break;
					}
					p.pop();
				}
			}
			p.push(a[j]);
		}
		while(!p.empty()){
			t[p.top()]++;
			p.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	cout<<endl;
}
