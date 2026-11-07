#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m;
int a[N],u[N];
vector<int> q;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q.push_back(i);
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		memset(u,0,sizeof(u));
		for(int j=0;j<q.size();j++){
			u[q[j]]=(a[q[j]]>>i)&1;
			cnt+=u[q[j]];
		}
		if(cnt<m) continue;
		q.clear();
		for(int j=1;j<=n;j++){
			if(u[j])
				q.push_back(j);
		}
	}
	int ans=a[q[0]];
	for(int i=0;i<q.size();i++){
		ans=ans&a[q[i]];
	}
	cout<<ans;
	return 0;
}
