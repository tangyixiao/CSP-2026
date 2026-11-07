#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,a[N],m,t[N],cnt[N];
stack<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(t,0,sizeof t);
		for(int j=i;j<=n;j++){
			if(t[a[j]]>0){
				while((!q.empty())&&q.top()!=a[j]){
					int l=q.top();
					t[l]--;
					q.pop();
				}
			}
			else{
				t[a[j]]++;
				q.push(a[j]);
			}
		}
		for(int k=1;k<=m;k++){
			if(t[k]>=1){
				cnt[k]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}