#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,x;
	cin>>n>>m;
	queue<int> s;
	stack<int> q;
	int a[50001]={};
	int b[50001]={};
	int c[50001]={};
	for(int i=1;i<=n;i++){
		cin>>x;
		c[i]=x;
		s.push(x);
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j+i<=n;j++){
			int x=j+i;
			q.push(s.front());
			if(a[s.front()]==1){
				a[q.top()]=0; 
				q.pop();
			}
			a[s.front()]=1;
			s.pop();
		}
		for(int j=i;j<=n;j++){
			a[j]=0;
		}
		while(!s.empty()){
			s.pop();
		}
		while(!q.empty()){
			if(a[q.top()]==0){
				b[q.top()]++;
				a[q.top()]=1;
			}
			q.pop();
		}
		for(int j=i+1;j<=n;j++){
			s.push(c[j]);
		}
		for(int j=i;j<=n;j++){
			a[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
