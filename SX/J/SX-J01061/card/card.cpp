#include<bits/stdc++.h>
using namespace std;

int a[500010];
int ans[300010];

stack<int> s;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin>>n>>m;
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	
	for(int i=1; i<=n; i++){
		vector<bool> vis(m, 0);
		for(int j=i; j<=n; j++){
			if(vis[a[j]] == false){
				s.push(a[j]);
				vis[a[j]] = true;
			}
			else{
				while(s.top() != a[j]){
					s.pop();
				}
			}
		}
		
		while(!s.empty()){
			ans[s.top()] ++;
			//cout<<s.top()<<endl;
			s.pop();
		}
		
		/*
		for(int i=1; i<=m; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		*/
	}
	
	for(int i=1; i<=m; i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}

/*

exhausted

noooooo!

11:20

//freopen

*/
