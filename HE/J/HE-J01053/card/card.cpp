#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N];
int cnt[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=1;k<=n;k++){
		vector<int> game;
		for(int i=k;i<=n;i++){
			bool flag=false;
			int liu=0;
			for(int it=0;it<game.size();it++){
				if(game[it]==a[i]){
					flag=true;
					liu=it+1;
					break;
				}
			}
			if(!flag) game.push_back(a[i]);
			else{
				while(game.size()>liu) game.pop_back();
			}
		}
		for(int it=0;it<game.size();it++){
			int cur=game[it];
			cnt[cur]++;
		}
	}
	for(int i=1;i<m;i++){
		cout<<cnt[i]<<" ";
	}
	cout<<cnt[m];
	return 0;
}
