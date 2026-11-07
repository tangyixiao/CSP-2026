#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int ans[500005];
stack<int>q;
int num[500005];
int c[500005],idx=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(n>5000&&m==2){
		ans[a[n]]=n;
		for(int i=1;i<n;++i){
			if(a[i]!=a[n]){
				ans[a[i]]++;
			}
		}
		for(int i=1;i<=m;++i){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	if(n>5000){
		int lt=1;
		for(int i=1;i<=n;++i){
			if(a[i]!=a[i-1]){
				++idx;
				num[idx]=a[i];
				c[idx]=i-lt;
				lt=i;
			}
		}
		for(int i=1;i<idx;++i){
			ans[num[i]]=c[i+1]+ans[num[i-1]];
		}
		ans[num[idx]]=n;
		for(int i=1;i<=m;++i){
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			num[a[j]]++;
			if(num[a[j]]>1){
				while(q.top()!=a[j]){
					num[q.top()]--;
					q.pop();
				}
				q.pop();
				q.push(a[j]);
				num[a[j]]=1;
			}else{
				q.push(a[j]);
			}
		}
		while(!q.empty()){
			ans[q.top()]++;
			q.pop();
		}
		memset(num,0,sizeof num);
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<' ';
	}
}