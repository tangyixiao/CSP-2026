#include <bits/stdc++.h>
using namespace std;
int n,a[500005],vis[300005],m,havei[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i =1;i<=n;i++){
		cin >> a[i];
	}
	for(int i = 1;i<=n;i++){
		int start = i;
		stack<int> game;
		game.push(a[start]);
		memset(vis,0,sizeof(vis));
		vis[a[start]] = 1;
		for(int j = start+1;j<=n;j++){
			if(vis[a[j]]&&!game.empty()){
				while(game.top()!=a[j]&&!game.empty()){
				vis[game.top()]=0;
				game.pop();}
				//game.push(a[j]);	
			}
			else{
				game.push(a[j]);
				//cout << "push j " << j << "a[j] " << a[j];
				vis[a[j]]=1;
			}
			//cout << endl;
		}
		while(!game.empty()){
			int val = game.top();
			havei[val]++;
			//cout << val << " ";
			game.pop();
		}
		//cout << "\n";
	}
	for(int i = 1;i<=m;i++)cout << havei[i] << " ";
	return 0;
} 
