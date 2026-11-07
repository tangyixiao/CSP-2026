#include<bits/stdc++.h>
using namespace std;
int n,m,a[5000000],ans[1000000];
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		stack<int>q,b;
		q.push(a[i]);
		b=q;
		for(int j=i+1;j<=m;j++){
			bool f=0;
			while(!q.empty()){
				int x=q.top();
				if(x!=a[j])q.pop();
				else if(x==a[j]){
					f=1;
					break;
				}
			}
		/*	stack<int>c;
			c=q;
			while(!c.empty()){
				int x=c.top();
				cout<<x<<" ";
				c.pop();
			}*/
			if(f==1){
				b=q;	
			}else{
				b.push(a[j]);
				q=b;
			}
		}
		while(!b.empty()){
			int x=b.top();
			ans[x]++;
			b.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}