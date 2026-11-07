#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=5e5+5;
ll pos[N],ans[N],a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=0;k<=n-1;k++){
		deque<ll>q;
		memset(pos,0,sizeof(pos));
		for(int j=k+1;j<=n;j++){
			if(pos[a[j]]!=0){
				for(int i=pos[a[j]]+1;i<=q.size();i++){
					pos[q.back()]=0;
					q.pop_back();
				}
			}else{
				q.push_back(a[j]);
				pos[a[j]]=q.size();
			}
		}
		for(int i=1;i<=m;i++){
			if(pos[i]!=0){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}