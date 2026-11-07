#include<bits/stdc++.h>
using namespace std;
int n,m,to[300010],a[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int u=1;
	for(int i=0;i<n;i++){
		int nn=n-i,j=u,tt[300010];
		queue<int> q;
		for(int p=0;p<=m;p++){
			tt[p]=0;
		}
		for(int y=1;y<=nn;y++){
			if(!tt[a[j]]){
				tt[a[j]]=1;
			}
			else{
				while(!q.empty()){
					tt[q.front()]=0;
					q.pop();
				}
			}
			q.push(a[j]);
			tt[a[j]]=1;
			j++;
			
		}
		while(!q.empty()){
			to[q.front()]++;
			q.pop();
		}
		u++;
	}
	for(int i=1;i<=m;i++){
		cout<<to[i]<<" ";
	}
	return 0;
}
