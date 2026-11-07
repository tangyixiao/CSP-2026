#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1,0),d(m+1),vis;
	bool fA=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) fA=0;
	}
	//性质A,4个
	if(fA){
		for(int i=1;i<=m;i++){
			int k=upper_bound(a.begin()+1,a.end(),i)-a.begin();
			if(i<m) cout<<k-1<<" ";
			else cout<<k-1;
		}
	}else{
	//n^2,前12个
		for(int i=1;i<=n;i++){
			vis.assign(m+1,0);
			stack<int> stk;
			for(int j=i;j<=n;j++){
				if(vis[a[j]]>0){
					while(stk.top()!=a[j]){
						vis[stk.top()]--;
						stk.pop();
					}
				}else{
					stk.push(a[j]);
					vis[a[j]]++;
				}
			}
			while(!stk.empty()){
				d[stk.top()]++;
				stk.pop();
			}
		}
		for(int i=1;i<m;i++) cout<<d[i]<<" ";
		cout<<d[m];
	}
	return 0;
}
