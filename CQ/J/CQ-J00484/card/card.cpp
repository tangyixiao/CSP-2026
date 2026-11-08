#include<bits/stdc++.h>
using namespace std;
/*
从T3过来，看了20分钟暂时没思路
--11:12--暴力算了 
*/
int n,m;
int a[50005],b[30005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		queue<int> q;
		for(int j=i;j<=n;j++){
			int qq=q.size();
			bool flag=1;
			for(int k=1;k<=qq;k++){
				if(q.front()==a[j]) flag=0;
				int u=q.front();
				q.pop();
				if(flag){
					q.push(u);
				} 
			}
			q.push(a[j]);
		}
		while(!q.empty()){
			b[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

