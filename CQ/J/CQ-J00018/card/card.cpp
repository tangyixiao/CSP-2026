#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
stack<int>q;
int a[N],c1[N],id[N],ans[N],c3[N]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];c3[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int p=0;
			if(!q.empty()){p=q.top();}
			if(c1[p]>0){
				while(!q.empty()&&q.top()!=a[j]){
					c1[q.top()]--;
					q.pop();
				}
			}
			c1[a[j]]++;
			q.push(a[j]);
		}
		while(!q.empty()){
			int p=q.top();
			ans[p]+=c1[p];
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c3[i]<<' ';
		
	} 
	return 0;
}
