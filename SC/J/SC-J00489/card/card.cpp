#include<bits/stdc++.h>
using namespace std;
const int MAN=5e5+10;
int a[MAN],ans[300000+10];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		map<int,int> f;
		stack<int> g;
		for(int j=i;j<=n;j++){
			if(f[a[j]]==0){
				g.push(a[j]);
				f[a[j]]=1;
			}else{
				while(g.top()!=a[j]) g.pop();
			}
		}
		while(!g.empty()){
			ans[g.top()]++;
			g.pop();
		}
	}
	for(int i=1;i<=m;i++){ 
		cout<<ans[i]<<" ";
	}

	return 0;
}
