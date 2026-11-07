#include <bits/stdc++.h>
using namespace std;

int k,n,m,a[500005];
int ans[300005],flag[300005];
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(ans,0,sizeof(ans));
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			k=a[j];
			if(flag[k]==1) {while(s.top()!=k) s.pop(); continue;}
			s.push(k); 
			flag[k]=1;
		}
		while(!s.empty()) {int t=s.top(); ans[t]++; s.pop();}
		memset(flag,0,sizeof(flag));
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
