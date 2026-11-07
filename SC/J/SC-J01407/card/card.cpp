#include<bits/stdc++.h>
using namespace std;


int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int r[m+1]={0},num[m+1]={0};
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int> v;
	//模拟游戏 
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(r[a[i]]){
				int p=v.top();
				while(p!=a[i]){
					r[p]=0;
					v.pop();
					p=v.top();
					
				}
			}
			else{
				v.push(a[i]);
				r[a[i]]=1;
			}
			}
		while(!v.empty()){
			num[v.top()]++;
			r[v.top()]=0;
			v.pop();
			
		}
		
	
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<' ';
	}
	return 0;
} 