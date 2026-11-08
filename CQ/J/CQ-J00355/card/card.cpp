#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[5000000];
int b[5000000];
bitset<5000000> f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		stack<int>ss;
		for(int j=1;j<=m;++j){
			f[j]=0;
		}
		for(int j=i;j<=n;++j){
			if(f[a[j]]){
				for(int k=j;ss.top()!=a[j];--k){
					f[ss.top()]=0;
					ss.pop();
				}
			}
			else{
				f[a[j]]=1;
				ss.push(a[j]);
			}
		}
		for(int j=1;j<=m;++j){
			b[j]+=f[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i];
		if(i!=m)cout<<' ';
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
