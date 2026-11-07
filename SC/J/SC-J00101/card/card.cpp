#include<bits/stdc++.h>
using namespace std;
#define int long long
int m,n,a[500005],ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		bool c[300005]={0};
		stack<int>s;
		for(int i=j;i<=n;i++){
			while(c[a[i]]){
				c[s.top()]=0;
				s.pop();
			}
			s.push(a[i]);
			c[a[i]]=1;
		}
		for(int i=1;i<=m;i++){
			if(c[i]){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}