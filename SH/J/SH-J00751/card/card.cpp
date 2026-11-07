#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int idx,val;
};
const int N=2e5+5;
int n,m,a[N],vis[N],ans[N],use[N];
stack<int> sk;
void subtask_n5000(){
	for(int i=1;i<=n;i++){
//		cout<<"Turn:\n";
		memset(vis,0ll,sizeof(vis));
		while(!sk.empty()) sk.pop();
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==1){
				while(!sk.empty()){
					if(sk.top()==a[j]){
						sk.pop();
						break;
					}
					vis[sk.top()]--;
					sk.pop();
				}
				sk.push(a[j]);
			}else{
				sk.push(a[j]);
				vis[a[j]]++; 
			}
		}
//		cout<<endl;
		for(int j=1;j<=m;j++){
			if(vis[j]){
//				cout<<j<<' ';
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	exit(0);
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	subtask_n5000();
	return 0;
}
