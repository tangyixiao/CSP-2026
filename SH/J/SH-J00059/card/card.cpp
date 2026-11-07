#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int a[500005];
int q[300005]={0};
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	memset(q,0,sizeof(q));
	memset(ans,0,sizeof(ans));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int cnt=1;
		memset(q,0,sizeof(q));
		for(int j=i;j<=n;j++){
			if(q[a[j]]!=0){
				int r=cnt;
				for(int k=q[a[j]]+1;k<=cnt;k++){
					s.pop();
					r--; 
				}
				cnt=r;
			}
			s.push(a[j]);
			q[a[j]]=cnt;
			cnt++;
		}
		while(s.size()){
			int t=s.top(); 
			s.pop();
			ans[t]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
