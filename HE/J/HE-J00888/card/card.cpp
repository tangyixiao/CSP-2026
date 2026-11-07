#include<bits/stdc++.h>
using namespace std;
const int N=5e4+10;
int a[N],dp[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	queue<int>aa,bb;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=m;i++){
		dp[i]=0;
		ans[i]=0;
	}
	for(int i=1;i<=n;i++){
		while(aa.size()){
			aa.pop();
		} 
		while(bb.size()){
			bb.pop();
		}
		for(int i=1;i<=m;i++){
			dp[i]=0;
		}
		for(int j=i;j<=n;j++){
			if(dp[a[j]]==0){
				aa.push(a[j]);
				dp[a[j]]=1;
			}else if(dp[a[j]]==1){
				dp[a[j]]=0;
				bool g=0;
				while(aa.size()){
					if(aa.front()==a[j]){
						g=1;
					}
					if(g==0){
					    bb.push(aa.front());
					    aa.pop();
			    	}else{
			    		dp[aa.front()]=0;
			    		aa.pop();
					}
				}
				while(bb.size()){
					aa.push(bb.front());
					bb.pop();
				}
				aa.push(a[j]);
				dp[a[j]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(dp[i]==1){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout <<ans[i]<<" ";
	}
	return 0;
} 
