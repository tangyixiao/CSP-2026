#include<bits/stdc++.h>
using namespace std;
int n,m,maxn=0;
long long a[200010],dp[200010];
/*
int ch(int j,int k){
	for(int i=j;i<=n;i++){
		if(a[i]!=k){
			q.push_back(a[i]);
		}else{
			int u=1;
			while(!q.empty()){
				if(a[k]==k) q.pop();
			}
			for(int u=1;u<=q.size();u++){
			}
			int op=q.size();
		}
	}
}
*/
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=m-1;i>=0;i--){
		cout<<i<<" ";
	}
	return 0;
} 
