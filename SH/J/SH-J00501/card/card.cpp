#include<cstdio>
#include<iostream>
using namespace std;
int n,m;
int a[600000];
int ins[300000];
int stk[300000];
int ans[300000];
int cst;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			if(ins[a[j]]){
				while(stk[cst]!=a[j]) --ins[stk[cst--]];
			}else{
				stk[++cst]=a[j];
				++ins[a[j]];
			}
		}
		while(cst){
			++ans[stk[cst]];
			--ins[stk[cst]];
			--cst;
		}
	}
	for(int i = 1;i <= m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}

// 48+ pts only
// 100+100+100+48=348
