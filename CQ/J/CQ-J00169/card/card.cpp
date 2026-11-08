#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[300005];
bool f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int>q;
	for(int i=n;i>=1;i--){
		if(f[a[i]]==0){
			q.push(a[i]);
			f[a[i]]=1;
		}
		else{
			while(!q.empty()&&q.top()!=a[i]){
				f[q.top()]=0;
//				cout<<q.top()<<" ";
				q.pop();
			}
			if(!q.empty()){
				q.pop();
			}
			q.push(a[i]);
		}
		for(int j=1;j<=m;j++){
			if(f[j]){
				c[j]++;
			}
		}
		cout<<f[3]<<" ";
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}

