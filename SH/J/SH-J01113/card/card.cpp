#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[500005];
int cnt[300005];
vector<int>game;
int n,m;
void gameprogress(int i){
	game.clear();
	for(;i<=n;++i){
		int now=arr[i];
		bool found=0;
		int len=game.size();
		for(int j=0;j<len;++j){
			if(game[j]==now){
				found=1;
				break;
			}
		}
		if(found){
			for(int j=len-1;game[j]!=now;--j){
				game.pop_back();
			}
			game.pop_back();
		}
		game.push_back(now);
	}
	int len=game.size();
	for(int i=0;i<len;++i){
		++cnt[game[i]];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		cin >> arr[i];
	}
	for(int i=1;i<=n;++i){
		gameprogress(i);
	}
	for(int i=1;i<=m;++i){
		cout << cnt[i] << " ";
	}
	return 0;
}
