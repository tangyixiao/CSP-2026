#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=200009; 
priority_queue <int> q;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a,h,ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		q.push(a);
	}
	ans=q.top();q.pop();
	for(int i=2;i<=m;i++){
		h=q.top();
		q.pop();
		ans=ans&h;
	}
	cout<<ans;
	return 0;
}
