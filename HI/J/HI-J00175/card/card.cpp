#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],ans[300005];
void p(int x){
	stack<int> st;
	while(!st.empty()){
		st.pop();
	}
	bool flag[300005];
	for(int i=1;i<=m;i++) flag[i]=false;
	for(int i=x-1;i<n;i++){
		if(flag[a[i]]==false){
			flag[a[i]]=true;
			st.push(a[i]);
		}else{
			while(st.top()!=a[i] && !st.empty()){
				flag[st.top()]=false;
				st.pop();
			}
		}
	}
	while(!st.empty()){
		ans[st.top()]++;
		st.pop();
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		p(i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
