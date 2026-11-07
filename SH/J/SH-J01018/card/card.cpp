#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N];
map<int,int>ans;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		map<int,bool>vis;
		stack<int>s;
		for(int j=i;j<n;j++){
			if(vis[a[j]]){
				while(s.top()!=a[j])vis[s.top()]=0,s.pop();
			}else{
				s.push(a[j]);
				vis[a[j]]=1;
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(auto ans_:ans){
		cout<<ans_.second<<' ';
	}
	/*ÀÛÁË£¬Æ­Æ­£¿£¡*/ 
	return 0;
}
