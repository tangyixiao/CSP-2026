#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5+10,M=3e5+10;
int n,m,a[N],ans[M],d[M];
stack<int> l,r;
struct node{
	bool flag=0;
	int b;
}to[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	bool f=1;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		if(a[i] < a[i-1]) f = 0;
	}
	if(f){
		for(int i = 1;i<=n;i++){
			ans[a[i]] = max(ans[a[i]],i);
		}
		for(int i = 1;i<=m;i++) cout << ans[i] << " ";
		return 0;
	} 
	for(int i = n;i>=1;i--){
		if(!to[a[i]].flag){
			ans[a[i]] = i;
			to[a[i]].flag=1;
			to[a[i]].b=i;
		}
		else{
			int l1 = l.top(),r1=r.top();	
			l.push(i);
			r.push(to[a[i]].b);
		}
	}

	while(!l.empty()){
		int l1=l.top(),r1=r.top();
		l.pop(),r.pop();
		for(int i = l1+1 ;i<=r1-1;i++) ans[a[i]] -= l1;
	}
		
	for(int i = 1;i<=m;i++) cout << ans[i] << " ";
	return 0;
}
