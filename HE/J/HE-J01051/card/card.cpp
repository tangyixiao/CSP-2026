#include<bits/stdc++.h>

using namespace std;
queue <int> q; 
int n,m;
int a[1000005];
int ans[300005];
int book[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){  //¹² n¾Ö
		memset(book,0,sizeof(book)); 
		for(int j=i;j<=n;j++){
			if(book[a[j]]==0){
				q.push(a[j]);
				book[a[j]]=1;
			}
			else{
				while(!q.empty()&&q.front()!=a[j]){
					q.pop();
				}
				if(q.empty())  q.push(a[j]);
			} 
		}
		while(!q.empty()){
			ans[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" "; 
	return 0;
} 
