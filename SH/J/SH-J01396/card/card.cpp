#include <bits/stdc++.h>
using namespace std;
stack<int>s;
int a[500020],ans[300020];
bool vis[300020];
int main(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				s.push(a[j]);
				vis[a[j]]=1;
			}
			else{
				while(s.top()!=a[j]){
					vis[s.top()]=0;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			vis[s.top()]=0;
			//cout<<s.top()<<' ';
			s.pop();
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m) cout<<' ';
	}
	return 0;
}
