#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],t[100010];
bool f[100010];
void solve(){
	for(int i=1;i<=m;i++)t[i]=0;
	for(int i=1;i<=n;i++){
		for(int x=1;x<=m;x++)f[x]=0;
		stack<int>s;
		for(int j=i;j<=n;j++){
			if(f[a[j]]){
				while(s.top()!=a[j]){
					f[s.top()]=0;
					s.pop();
				}
			}else{
				f[a[j]]=1;
				s.push(a[j]);
			}
		}
		while(s.size()){
			t[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]=i;
	}
	if(n<=5){
		solve();
		return 0;
	} 
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}