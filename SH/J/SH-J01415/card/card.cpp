#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],b[M],cnt[M];
stack<int>st;
void solve(int id){
	int a1[N],len=0;
	while(st.size())st.pop();
	memset(b,0,sizeof b);
	for(int i=id;i<=n;i++){
		a1[++len]=a[i];
	}
	for(int i=1;i<=len;i++){
		if(b[a1[i]]){
			while(st.top()!=a1[i]){
				b[st.top()]--;
				st.pop();
			}
			b[st.top()]--;
			st.pop();
		}
		st.push(a1[i]);
		b[a1[i]]++;
	}
	while(st.size()){
		cnt[st.top()]++;
		st.pop();
	}
	return ;
} 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		solve(i);
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
