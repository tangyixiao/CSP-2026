#include<bits/stdc++.h>
using namespace std;
int n,m,d[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int f[m+1];
		stack<int>b;
		stack<int>c;
		for(int j=1;j<=m;j++){
			f[j]=0;
		}
		for(int j=n;j>=i;j--){
			b.push(a[j]);
		}
		while(!b.empty()){
			if(f[b.top()]==0){
				f[b.top()]=1;
				c.push(b.top());
				b.pop();
			}else{
				while(c.top()!=b.top()){
					f[c.top()]=0;
					c.pop();
				}
				b.pop();
			}
		}
		for(int j=1;j<=m;j++){
			d[j]+=f[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
