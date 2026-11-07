#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,N2=3e5+10;
int a[N],n,m,num[N2];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int> q;
	set<int> st;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			q.push(a[j]);
			int p=st.size();
			st.insert(a[j]);
//			int o=q.size();
//			while(o--){
//				int s=q.front();
//				cout<<s<<" ";
//				q.pop();
//				q.push(s);
//			}
//			cout<<'\n';
			if(st.size()==p){
				q.pop();
				while(q.top()!=a[j]&&q.size()){
					int x=q.top();
					q.pop();
					st.erase(x);
				}
			}
		}
		while(q.size()){
			num[q.top()]++;
			q.pop();
		}
		st.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
