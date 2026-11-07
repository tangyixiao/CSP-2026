#include<bits/stdc++.h>
using namespace std;
const int N = 5005;
int n,m,top,st[N],vis[N],cnt[N],dir[N],a[N];
int main(){ 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	int now_turn = 1;
	while(now_turn <= n){
		memset(dir,0x3f,sizeof(dir));
		top = 0;
		for(int i = now_turn;i <= n;i++){
			if(dir[a[i]] >= top){
				st[top++] = a[i];
				dir[a[i]] = top - 1;
			}
			else{
				top = dir[a[i]];
				st[top++] = a[i];
				dir[a[i]] = top - 1;
			}
		}
		for(int i = 0;i < top;i++){
			cnt[st[i]]++;
		}
		now_turn++;
	}
	for(int i = 1;i <= m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
