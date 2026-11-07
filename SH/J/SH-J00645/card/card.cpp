#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 +10;
const int M = 3e5 +10;
//48pts
int a[N],cnt[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		vector<bool> b(m, false);
		stack<int> q;
		for(int j = i;j<=n;j++){
			int k = a[j];
//			cout<<k<<' ';
			if(b[k] == true){
				while(q.size() && q.top() != k){
					b[q.top()] = false;
					q.pop();
				}
			}else{
				b[k] = true;
				q.push(k);
			}
		}
		while(q.size()){
			int k = q.top();
			q.pop();
//			cout<<k<<' ';
			cnt[k]++;
		}
//		cout<<'\n';
	}
	for(int i = 1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
