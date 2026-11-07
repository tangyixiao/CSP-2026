#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int f[m+1];
	memset(f,0,sizeof(f));
	for(int t=1;t<=n;t++){
		stack<int> q;
		int ft[m+1];
		memset(ft,0,sizeof(ft));
		for(int i=t;i<=n;i++){
			if(ft[a[i]]==0){
				ft[a[i]]++;
				q.push(a[i]);
			}else{
				while(q.top()!=a[i]){
					ft[q.top()]--;
					q.pop();
				}
			}
		}
		for(int i=1;i<=m;i++){
			f[i]+=ft[i];
//			cout<<ft[i]<<" ";
		}//cout<<endl; 
	}
	for(int i=1;i<=m;i++){
		cout<<f[i]<<" ";
	}
	return 0;
} 