#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500005];
int ans[300005];
bool t[300005];
stack<int> stk;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!t[a[j]]){
				t[a[j]]=false;
				while(stk.top()!=a[j]){
					t[stk.top()]=false;
					stk.pop();
				}
				cout<<stk.size()<<endl;
				stk.pop();
			}else{
				t[a[j]]=true;
				stk.push(a[j]);
			}
		}
		for(int j=1;j<=m;j++) if(t[j]) ans[j]++;
		while(!stk.empty()) stk.pop();
		memset(t,0x00,sizeof t);
	}
	
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
