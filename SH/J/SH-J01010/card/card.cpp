#include<bits/stdc++.h>
using namespace std;
int cnt[300005]={};
int appear[300005]={};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	stack<int> s;
	int n,m;
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		s.push(a); 
	}

	while(!s.empty()){
		if(appear[s.top()]==0){
			cnt[s.top()]++;
			appear[s.top()]++;
			s.pop();
		}	
		else{
			memset(appear,0,sizeof(appear));
			cnt[s.top()]++;
			appear[s.top()]++;
			s.pop();
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<1<<" ";
	}
	return 0;
}
