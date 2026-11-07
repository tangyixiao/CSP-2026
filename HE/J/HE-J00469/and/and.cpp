#include<bits/stdc++.h>
using namespace std;
int n,m,e[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>e[i];
	}sort(e+1,e+n+1);
	if(m==1){
		cout<<e[n];
		return 0;
	}else if(m=2){
		cout<<max(e[n]&e[n-1],e[n-1]&e[n-2]);
		return 0;
	}else{
		int t=e[n];
		while(m--){
			t&=e[n-m];
		}cout<<t;
	}
}
