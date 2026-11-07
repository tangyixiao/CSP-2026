#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m; 
int a[N],c[M];
int cnt[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
		c[a[i]]=i;
	}
	for(i=1;i<=n;i++){
		int start=i;
		while(start<=n){
			start=c[a[start]];
			cnt[a[start]]+=1;
			start++;
		}
	}
	for(i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 