#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>cards(n),game,ans(m+1);
	for(int i=0;i<n;i++)cin>>cards[i];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(find(game.begin(),game.end(),cards[j])!=game.end())game.erase(find(game.begin(),game.end(),cards[j]),game.end()); 
			game.push_back(cards[j]);
		}
		for(int i=0;i<(int)game.size();i++)ans[game[i]]++;
		game.clear();
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}