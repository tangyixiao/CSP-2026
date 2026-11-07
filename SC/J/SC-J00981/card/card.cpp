#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
const int man=5e5+10;
bool vis[man];
int ord[man],cnt[man],n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ord[i];
	}
	int stt=0;
	while(++stt<=n){
		memset(vis,0,sizeof vis);
		stack<int>stk;
		for(int i=stt;i<=n;i++){
			if(vis[ord[i]]){
				while(stk.top()!=ord[i]){
					vis[stk.top()]=0;
					stk.pop();
				}
			}else{
				stk.push(ord[i]);
				vis[ord[i]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			cnt[i]+=vis[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i];
		if(i<m)cout<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}