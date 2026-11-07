#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int MAXN=1e7+5;
int Q[MAXN];
signed main(){
	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a;
	for(int i=1;i<=n;i++){
	cin>>a; 
	Q[i]=a;
	} 
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){ 
			if (Q[i]==Q[j]&&cnt==1){
				cnt++;
				Q[i]=0;
				Q[j]=0;
			}
			if(j==i&&Q[i]!=Q[j]) {
				Q[i]=Q[n+1];
			}
		}
	
		 
	}
	for(int i=1;i<=m;i++){
		cout<<Q[i]<<" ";
	}
	
	
	
	return 0;
} 
