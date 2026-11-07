#include <bits/stdc++.h>
using namespace std;
const int N=2e6+5;
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=m;i++){
		bool vis[N]={0};
		deque <int> q;
		int cnt=0;
		for (int j=1;j<=n;j++){
			for (int l=j;l<=n;l++){
				int k=a[l];
				if (!vis[k]){
					q.push_back(k);	
					vis[k]=1;
				}else{
					while (q.size() && q.back()!=k){
						vis[q.back()]=0;
						q.pop_back();
					}
					vis[k]=1;
				}
			}
			while (q.size()){
				if (q.front()==i){
					cnt++;
					break;
				}
				q.pop_front();
			}
			q.clear();
			for (int i=1;i<=m;i++)vis[i]=0;
		}
		cout<<cnt<<" ";
	}
	return 0;
}
