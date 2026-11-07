#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N];
int net[N];
int cnt[N];
void solve(int id){
	memset(net,0,sizeof(net));
	int len=0;
	for(int i=id;i<=n;i++){
		if(!net[a[i]]){
			len++;
			net[a[i]]=len;
		}else{
			for(int j=1;j<=len-net[a[i]];j++){
				net[a[i-j]]=0;
			}
			len=net[a[i]];
		}
	}
	for(int i=1;i<=m;i++){
		if(net[i]){
			cnt[i]++;
		}
	}
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
		cout<<cnt[i]<<' ';
	}
	return 0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/