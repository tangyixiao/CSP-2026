#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500100],cnt[500100];
stack<int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		int vis[500100]={};
		int id[500100]={};
		for(int i=j;i<=n;i++){
			if(vis[a[i]]==0){
				st.push(a[i]);
				vis[a[i]]++;
				id[st.size()]=i;
			}else{
				while(st.size()){
					if(st.top()!=a[i]){
						vis[a[id[st.size()]]]--;
						st.pop();
					}else{
						st.pop();
						st.push(a[i]);
						id[st.size()]=i;
						break;
					}
				}
			}
		}
		while(st.size()){
			cnt[st.top()]++;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
