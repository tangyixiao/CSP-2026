#include<bits/stdc++.h>
#define int long long
#define P pair<int,int>
using namespace std;
const int N=5e5,M=3e5;
int n,m,a[N+5],last[M+5];//last 每种点数最后一个的下标 
int ans[M+5];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	if(n*m>600000000ll){
		int last=0,id=0;
		for(int i=1,a;i<=n;i++){
			cin>>a;
			if(a!=last){
				if(i!=1) cout<<id<<' ';
				last=a;
			}
			id=i;
		}
		cout<<id;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<=n){
			j=last[a[j]];
			ans[a[j]]++;
			j++;
		}
	}
	for(int i=1;i<m;i++) cout<<ans[i]<<' ';
	cout<<ans[m];
	return 0;
}
