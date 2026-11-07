#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+5;
int s[M],k[M];
bool b[M];
int n,m;
int a[N]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=n;j++){
		memset(s,0,sizeof(s));
		memset(b,0,sizeof(b));
		stack<int> q;
		for(int i=j;i<=n;i++){
			if(s[a[i]]==0){
				q.push(a[i]);
				s[a[i]]=1;
			}else{
				while(!q.empty()&&q.top()!=a[i]){
					s[q.top()]=0;q.pop();
				}
			}
		}
		while(!q.empty()){
			if(b[q.top()]==0) ++k[q.top()],b[q.top()]=1;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<' '; 
	} 
	
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1 */