//#include<bits/stdc++.h>
//#define int long long
//#define N 500005
//using namespace std;
//
//int n,m;
//
//int a[N];
//
//int vis[N];
//
//vector<int> fg,fg1;
//
//int dq;
//
//int tim[N];
//
//int ans[N];
//
//int check(int i){
//	int j=dq;
////	cout<<fg1[j]<<" "<<i<<endl;
//	while(fg1[j]<=i){
////		cout<<fg1[j]<<" "<<i<<endl;
//		if(j==fg1.size()-1) return i;
//		j++;
//	}
//	return i-fg[j]-1;
//}
//
//signed main(){
//	freopen("card.in","r",stdin);
//	freopen("error.out","w",stdout);
//	ios::sync_with_stdio(false);
//	cin.tie(0),cout.tie(0);
//	cin>>n>>m;
//	for(int i=1;i<=n;i++) cin>>a[i];
//	for(int i=n;i>=1;i--){
//		if(vis[a[i]]){
//			if(!fg.empty()) if(vis[a[i]]>=fg.back()&&vis[a[i]]<fg1.back()){
//				vis[a[i]]=i;
//				continue;
//			}
//			fg.push_back(i);
//			fg1.push_back(vis[a[i]]);
//		}
//		else vis[a[i]]=i;
//	}
//	fg1.push_back(fg.back());
//	fg.push_back(0);
//	for(int i=n;i>=1;i--){
//		if(i<fg[dq]) dq++;
////		cout<<fg[dq]<<" "<<fg1[dq]<<'\n';
//		if(i>=fg1[dq]){
////			cout<<i;
//			ans[a[i]]+=check(i);
//		}
//		else ans[a[i]]+=i-fg[dq];
//	}
//	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
//	return 0;
//}
//ÉXÉm·âÓ¡µÄ´úÂë
#include<bits/stdc++.h>
#define int long long
#define N 500005
using namespace std;

int n,m;

int a[N];

int ans[N];

stack<int> q;
bool vis[N];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]) while(!q.empty()&&q.top()!=a[j]){
//				cout<<1;
				vis[q.top()]=false;
				q.pop();
			}
			else{
				q.push(a[j]);
				vis[a[j]]=true;
			}
		}
		while(!q.empty()){
			vis[q.top()]=false;
			ans[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
